
/**
 ******************************************************************************
 *
 * @file        MG82F6D17_ADC_DRV.h
 *
 * @brief       This is the C code format driver head file.
 *
 * @par         Project
 *              MG82F6D17
 * @version     V0.03
 * @date        2020/01/22
 * @author      Megawin Software Center
 * @copyright   Copyright (c) 2019 Megawin Technology Co., Ltd.
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
#ifndef _MG82F6D17_ADC_DRV_H
#define _MG82F6D17_ADC_DRV_H

/// @cond Wizard_constant

//*** <<< Use Configuration Wizard in Context Menu >>> ***

//<h> Initialize ADC
//<i> This only changes the parameters of "__DRV_ADC_Wizard_Init ()"
//<o0> ADC Trigger Source 
//<0x00=> Software (Default) 
//<0x01=> Timer 0 overflow 
//<0x02=> Free running mode 
//<0x03=> S0BRG overflow 
//<0x10=> KBIET 
//<0x11=> INT1ET  
//<0x12=> INT2ET 
//<0x20=> T2EXES  
//<0x22=> T3EXES 
//<0x30=> PCA0 overflow
//<0x31=> C0CMP6   
//<0x32=> C0CMP6 or C0CMP7 
//<i> ADC trigger mode selection. 
  #define __ADC_TRG__   0x0002
//<o0> ADC Input Channel <0x00=> AIN0 (Default) <0x01=> AIN1 <0x02=> AIN2 <0x03=> AIN3 <0x04=> AIN4 <0x05=> AIN5 <0x06=> AIN6 <0x07=> AIN7 <0x08=> Internal Vref 1.4V <0x09=> VSS
//<i> Input channel selection for ADC analog multiplexer.
  #define __ADC_CHL__  0x00
//<o0> ADC Clock Source <0x00=> SYSCLK DIV 1 (Default) <0x20=> SYSCLK DIV 2 <0x40=> SYSCLK DIV 4 <0x60=> SYSCLK DIV 8 <0x80=> ADC SYSCLK DIV 16 <0xA0=> SYSCLK DIV 32 <0xC0=> S0BRG overflow DIV 2 <0xE0=> Timer 2 overflow DIV 2
//<i> ADC conversion clock select.
  #define __ADC_CLKS__  0x00
//<o0> ADC Data Alignment <0x00=> Left justified (Default) <0x10=> Right justified
//<i> Left justified : The most significant 8 bits of conversion result are saved in ADCDH[7:0], while the least significant 4 bits in ADCDL[7:4].
//<i> Right justified : The most significant 4 bits of conversion result are saved in ADCDH[3:0], while the least significant 8 bits in ADCDL[7:0].
  #define __ADC_DATAALIGNMENT__ 0x00


//<e0> ADC Window Detect
//<i>Configuration ADC window detect.
  #define __WINDOW_DETECT_EN__    0 
//<o0> Window Detect Mode <0x00=> Inside (Default) <0x40=> Outside
//<i> ADC value
//<i>____4095
//<i>|   | Outside
//<i>|   |<----- High Boundary
//<i>|   | Inside
//<i>|   |<----- Low Boundary
//<i>|   | Outside
//<i>|__| 0
  #define __ADC_WD_MODE__    0x00  
//<o0> High Boundary Value is (1~4095)<1-4095>
//<i>ADC Window detect high boundary value
  #define __ADC_WD_HB__  4095
//<o0> Low Boundary Value is (0~4094)<0-4094>
//<i>ADC Window detect low boundary value
  #define __ADC_WD_LB__  0 

//</e> 
//<e0> ADC Scan Loop  
//<i> Configuration ADC scan loop pin.
  #define __SCAN_LOOP_EN__  0
//<q0.0> AIN0 Enable
//<q0.1> AIN1 Enable
//<q0.2> AIN2 Enable
//<q0.3> AIN3 Enable
//<q0.4> AIN4 Enable
//<q0.5> AIN5 Enable
//<q0.6> AIN6 Enable
//<q0.7> AIN7 Enable
  #define SCAN_LOOP_PIN 0x00
//</e>   
 //</h>


  
// <<< end of configuration section >>>





//!@{
//! defgroup ADC Channel input
#define AIN0     0x00
#define AIN1     0x01 
#define AIN2     0x00
#define AIN3     0x03
#define AIN4     0x04
#define AIN5     0x05
#define AIN6     0x06
#define AIN7     0x07
#define INTERNAL_VERF     0x08
#define VSS     0x09
//!@}

//!@{
//! defgroup Conversion Clock
#define ADC_SYSCLK_DIV_1     0x00<<5
#define ADC_SYSCLK_DIV_2     0x01<<5
#define ADC_SYSCLK_DIV_4     0x02<<5
#define ADC_SYSCLK_DIV_8     0x03<<5
#define ADC_SYSCLK_DIV_16    0x04<<5
#define ADC_SYSCLK_DIV_32    0x05<<5
#define ADC_S0TOF_DIV_2      0x06<<5
#define ADC_T2OF_DIV_2       0x07<<5
//!@}

//!@{
//! defgroup ADC conversion data format
#define	  ADC_LEFT_JUSTIFIED  0x00
#define	  ADC_RIGHT_JUSTIFIED  0x10
//!@}

//!@{
//! defgroup ADC start control source select
#define	  ADC_START   0x0         
#define   ADC_TM0OF   0x1          
#define   ADC_FREE_RUN 0x2        
#define   ADC_S0OF    0x3
#define   ADC_KBIET   0x10        
#define   ADC_INT1ET  0x11
#define   ADC_INT2ET  0x12
#define   ADC_T2EXES  0x20
#define   ADC_T3EXES  0x22
#define   ADC_C0TOF   0x30
#define   ADC_C0CMP6  0x31
#define   ADC_C0MP6_OR_C0MP7 0x32
//!@}

//!@{
//! defgroup ADC scan channel select
#define SAIN7        0x80
#define SAIN6        0x40
#define SAIN5        0x20
#define SAIN4        0x10
#define SAIN3        0x08
#define SAIN2        0x04
#define SAIN1        0x02
#define SAIN0        0x01
//!@}

//! defgroup ADC window detect mode select
#define ADC_WD_INSIDE   0x00
#define ADC_WD_OUTSIDE  0x40
//!@}

//! defgroup ADC Resolution select
#define ADC_8BIT   0x00
#define ADC_10BIT  0x01
#define ADC_12BIT  0x02
//!@}

//! defgroup ADC Data Order transfer by DMA
#define H_FIRST   0x00
#define L_FIRST   0x01
//!@}

//! defgroup ADC Data Byte transfer by DMA.
#define DRV_1BYTE 0x00
#define DRV_2BYTE 0x01
//!@}
/// @endcond

//!@{
//! defgroup ADC Define
#define __DRV_ADC_Enable()     ADCON0 |= ADCEN
#define __DRV_ADC_Disable()    ADCON0 &= ~ADCEN
#define __DRV_ADC_Start()      ADCON0 |= ADCS		
#define __DRV_ADC_ClearFlag()  ADCON0 &= ~ADCI
#define __DRV_ADC_ClearWindowFlag()  ADCON0 &= ~ADCWI
#define __DRV_ADC_ClearSampleFlag()  ADCFG0 &= ~SMPF
//!@}
/**
 *******************************************************************************
 * @brief       Config ADC input.
 * @details
 * @param[in]   \_\_INPUTDEF\_\_ : ADC Channel input pin.
 *  @arg\b	    AIN0 : select P10
 *	@arg\b	    AIN1 : select P11
 *	@arg\b	    AIN2 : select P22
 *	@arg\b	    AIN3 : select P24
 *	@arg\b	    AIN4 : select P30
 *	@arg\b	    AIN5 : select P15
 *	@arg\b	    AIN6 : select P16
 *	@arg\b	    AIN7 : select P17
 *  @arg\b      INTERNAL_VERF : select Internal Vref 1.4V
 *  @arg\b      VSS : select Internal GND
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_ADC_PinMux_Select(AIN0);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_PinMux_Select(__INPUTDEF__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(0);\
          ADCON0 &= ~(CHS2 | CHS1 | CHS0);\
          ADCFG0 &= ~ACHS;\
          ADCON0 |= __INPUTDEF__ & 0x07;\
          ADCFG0 |= __INPUTDEF__ & 0x08;\
          _pop_(SFRPI);\
		    )
/**
 *******************************************************************************
 * @brief       Polling for regular conversion complete.
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_ADC_PollForConversion();
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_PollForConversion()\
          while((ADCON0 & ADCI) != ADCI)\

/**
 *******************************************************************************
 * @brief       Config ADC Conversion Clock.
 * @details         
 * @param[in]   \_\_CLOCKDEF\_\_ :  specifies the ADC Conversion Clock.
 *  @arg\b      ADC_SYSCLK_DIV_1: ADC clock source by system clock with divider 1  
 *  @arg\b      ADC_SYSCLK_DIV_2: ADC clock source by system clock with divider 2   
 *  @arg\b      ADC_SYSCLK_DIV_4: ADC clock source by system clock with divider 4 
 *  @arg\b      ADC_SYSCLK_DIV_8: ADC clock source by system clock with divider 8  
 *  @arg\b      ADC_SYSCLK_DIV_16: ADC clock source by system clock with divider 16 
 *  @arg\b      ADC_SYSCLK_DIV_32: ADC clock source by system clock with divider 32   
 *  @arg\b      ADC_S0TOF_DIV_2: ADC clock source by S0 overflow with divider 2 
 *  @arg\b      ADC_T2OF_DIV_2: ADC clock source by Timer2 overflow with divider 2 
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_ADC_ClockSource_Select(ADC_SYSCLK_DIV_8);
 * @endcode
 *******************************************************************************
 */	
#define   __DRV_ADC_ClockSource_Select(__CLOCKDEF__)\
     MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(0);\
          ADCFG0 &= 0x1F;\
          ADCFG0 |= __CLOCKDEF__;\
          _pop_(SFRPI);\
         )  
          
/**
 *******************************************************************************
 * @brief	    config ADC conversion data Alignment mode
 * @details
 * @param[in] 	\_\_ALIGNMODE\_\_ : data alignment mode select (Right/Left)
 *	@arg\b	    ADC_LEFT_JUSTIFIED : ADC result Left-Justified
 *  @arg\b	    ADC_RIGHT_JUSTIFIED : ADC result Right-Justified
 * @return 	    None
 * @note
 * @par         Example
 * @code
 *    __DRV_ADC_DataAlignment_Select(ADC_RIGHT_JUSTIFIED);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_DataAlignment_Select(__ALIGNMODE__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(0);\
          __ALIGNMODE__==ADC_RIGHT_JUSTIFIED?(ADCFG0 |= ADRJ):(ADCFG0 &= ~ADRJ);\
          _pop_(SFRPI);\
				 )
/**
 *******************************************************************************
 * @brief	    Enable/Disable ADC Function State
 * @details
 * @param[in] \_\_STATE\_\_ : config ADC Function
 *      	    This parameter can be: ENABLE or DISABLE.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_Cmd(__STATE__)\
          __STATE__==ENABLE?(ADCON0 |= ADCEN):(ADCON0 &= ~ADCEN)\
				
/**
 *******************************************************************************
 * @brief	    config ADC trigger conversion source
 * @details
 * @param[in] 	\_\_ADCTRGSEL\_\_ : select conversion trigger source
 *	@arg\b	    ADC_START : ADC trigger source by software (ADCS)       
 *	@arg\b	    ADC_TM0OF : ADC trigger source by Timer0 overflow        
 *	@arg\b	    ADC_FREE_RUN : ADC free run        
 *	@arg\b	    ADC_S0OF : ADC trigger source by S0BRG overflow          
 *	@arg\b	    ADC_KBIET : ADC trigger source by KBI        
 *	@arg\b	    ADC_INT1ET : ADC trigger source by INT1
 *	@arg\b	    ADC_INT2ET : ADC trigger source by INT2
 *	@arg\b	    ADC_T2EXES : ADC trigger source by T2EXES
 *	@arg\b	    ADC_T3EXES : ADC trigger source by T3EXES
 *	@arg\b	    ADC_C0TOF : ADC trigger source by PCA0 overflow
 *	@arg\b	    ADC_C0CMP6 : ADC trigger source by PCA0 CH6 compare
 *	@arg\b	    ADC_C0MP6_OR_C0MP7 : ADC trigger source by PCA0 CH6/CH7 compare
 * @return 	    None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_TriggerSource_Select(ADC_START);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_TriggerSource_Select(__ADCTRGSEL__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(0);\
          ADCFG0 &= ~(ADTM1 | ADTM0);\
          ADCFG0 |= __ADCTRGSEL__ & 0x03;\
          __DRV_SFR_PageIndex(4);\
          ADCFG4 &= 0xCF;\
          ADCFG4 = (__ADCTRGSEL__) & 0x30;\
          _pop_(SFRPI);\
         ) 
				
/**
 *******************************************************************************
 * @brief	    set Conversion Time
 * @details
 * @param[in] \_\_SAMVAL\_\_ : config conversion extend time.(0~255)
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_SetExtendSampling(10);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_SetExtendSampling(__SAMVAL__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(2);\
          ADCFG2 = __SAMVAL__;\
          _pop_(SFRPI);\
         )    

/**
 *******************************************************************************
 * @brief	    get ADC conversion data
 * @details
 * @return 	  ADCDH,ADCDL
 * @note
 * @par         Example 
 * @code
 *    16bitReg(user define) = __DRV_ADC_GetConversionData();
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_GetConversionData() (ADCDH << 8 | ADCDL)

/**
 *******************************************************************************
 * @brief	    Enable/Disable IVREF Function State
 * @details
 * @param[in] \_\_STATE\_\_ : config IVREF Function
 *      	    This parameter can be: ENABLE or DISABLE.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_IVREF_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_IVREF_Cmd(__STATE__)\
      MWT(\
          DRV_PageP_Read(PCON3_P);\
          __STATE__==ENABLE?(IFD |= IVREN_P):(IFD &= ~IVREN_P);\
          DRV_PageP_Write(PCON3_P,IFD);\
          )
/**
 *******************************************************************************
 * @brief	    Enable/Disable channel in scan/loop mode
 * @details
 * @param[in] 	\_\_SCANCHANNELX\_\_ : SAIN0, SAIN1 ... SAIN7
 *  @arg\b	    SAIN0 : select P10
 *	@arg\b	    SAIN1 : select P11
 *	@arg\b	    SAIN2 : select P22
 *	@arg\b	    SAIN3 : select P24
 *	@arg\b	    SAIN4 : select P30
 *	@arg\b	    SAIN5 : select P15
 *	@arg\b	    SAIN6 : select P16
 *	@arg\b	    SAIN7 : select P17
 * @param[in] 	\_\_STATE\_\_ : config inversion control bit
 *      	      This parameter can be: ENABLE or DISABLE.
 * @return 	    None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ScanLoopChannel_Config(SAIN0|SAIN2|SAIN7,ENABLE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ScanLoopChannel_Config(__SCANCHANNELX__,__STATE__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(5);\
          (__STATE__==ENABLE?(ADCFG5 |= __SCANCHANNELX__):(ADCFG5 &= ~(__SCANCHANNELX__)));\
          _pop_(SFRPI);\
          )

/**
 *******************************************************************************
 * @brief	    set Window Detect High Boundary value.
 * @details
 * @param[in] \_\_HTHRESHOLD\_\_ : config High Boundary value 1~4095.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_SetHigherThreshold(4000);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_SetHigherThreshold(__HTHRESHOLD__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(0x0B);\
          ADCFG11 = LOBYTE( __HTHRESHOLD__ << 4);\
          __DRV_SFR_PageIndex(0x0C);\
          ADCFG12 = HIBYTE( __HTHRESHOLD__ << 4);\
          _pop_(SFRPI);\
         )     

/**
 *******************************************************************************
 * @brief	    set Window Detect Low Boundary value.
 * @details
 * @param[in] \_\_LTHRESHOLD\_\_ : config Low Boundary value 0~4094.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_SetLowerThreshold(40);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_SetLowerThreshold(__LTHRESHOLD__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(0x0D);\
          ADCFG13 = LOBYTE( __LTHRESHOLD__ << 4);\
          __DRV_SFR_PageIndex(0x0E);\
          ADCFG14 = HIBYTE( __LTHRESHOLD__ << 4);\
          _pop_(SFRPI);\
         )     

/**
 *******************************************************************************
 * @brief	    Enable/Disable ADC window detect interrupt
 * @details
 * @param[in] \_\_STATE\_\_ :  config Window Detect interrupt
 *      	    This parameter can be: ENABLE or DISABLE.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_WindowDetect_IT(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_WindowDetect_IT(__STATE__)\
      MWT(\
          _push_ (SFRPI);\
          __DRV_ADC_ClearWindowFlag();\
          __DRV_SFR_PageIndex(1);\
          (__STATE__==ENABLE?(ADCFG1 |= EADCWI):(ADCFG1 &= ~EADCWI));\
          _pop_(SFRPI);\
          )
    
/**
 *******************************************************************************
 * @brief	    Select ADC window detect mode select
 * @details
 * @param[in] \_\_ADC_WDSEL\_\_ : config window detect mode select
 *	@arg\b	  ADC_WD_INSIDE         
 *	@arg\b	  ADC_WD_OUTSIDE          
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_WindowDetectMode_Select(ADC_WD_INSIDE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_WindowDetectMode_Select(__ADC_WDSEL__)\
      MWT(\
          _push_ (SFRPI);\
          __DRV_SFR_PageIndex(4);\
          (__ADC_WDSEL__==ADC_WD_INSIDE?(ADCFG4 &= ~ADWM0):(ADCFG4 |= ADWM0));\
          _pop_(SFRPI);\
          )

/**
 *******************************************************************************
 * @brief	    Disable ADCI interrupt.
 * @details
 * @param[in] \_\_STATE\_\_ : config Ignore ADCI flag 
 *      	    This parameter can be: ENABLE or DISABLE.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_IgnoreADCI_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_IgnoreADCI_Cmd(__STATE__)\
      MWT(\
          _push_ (SFRPI);\
          __DRV_SFR_PageIndex(1);\
          (__STATE__==ENABLE?(ADCFG1 |= IGADCI):(ADCFG1 &= ~IGADCI));\
          _pop_(SFRPI);\
         )
         
/**
 *******************************************************************************
 * @brief       ADC mode select,Resolution 8bit or 10bit and 12bit
 * @details
 * @param[in]   \_\_RESOLUTIONDATA\_\_ : config ADC Resolution
 *  @arg\b	    ADC_8BIT        
 *	@arg\b	    ADC_10BIT
 *	@arg\b	    ADC_12BIT 
 * @return      None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_DataResolution_Select(ADC_10BIT);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_DataResolution_Select(__RESOLUTIONDATA__)\
      MWT(\
          _push_ (SFRPI);\
          __DRV_SFR_PageIndex(3);\
          ADCFG3 &= ~ ( ARES1 | ARES0 );\
          (__RESOLUTIONDATA__==ADC_8BIT?(ADCFG3 |= ARES1):\
          __RESOLUTIONDATA__== ADC_10BIT? (ADCFG3 |= ARES0): (_nop_()));\
          _pop_(SFRPI);\
          )    

/**
 *******************************************************************************
 * @brief	    ADC Data Order transfer by DMA.
 * @details
 * @param[in] \_\_STATE\_\_ : config ADC Data Order transfer by DMA
 *  @arg\b	  H_FIRST : DMA transfer ADCDH first
 *  @arg\b	  L_FIRST : DMA transfer ADCDL first
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_DMATransferOrder(H_First);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_DMATransferOrder(__STATE__)\
      MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(4);\
        (__STATE__==H_First?(ADCFG4 |= DOSD):(ADCFG4 &= ~DOSD));\
        _pop_(SFRPI);\
        )
     
/**
 *******************************************************************************
 * @brief	    ADC Data Byte transfer by DMA.
 * @details
 * @param[in] \_\_DMADATASIZE\_\_ : config ADC Data Byte transfer 1BYTE or 2BYTE by DMA.
 *  @arg\b	  DRV_1BYTE : DMA transfer 1 Byte Data
 *  @arg\b	  DRV_2BYTE : DMA transfer 2 Byte Data
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_DMADataSize_Select(DRV_1BYTE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_DMADataSize_Select(__DMADATASIZE__)\
      MWT(\
          _push_(SFRPI);\
          __DRV_SFR_PageIndex(4);\
          (__DMADATASIZE__==DRV_1BYTE?(ADCFG4 |= DBSD):(ADCFG4 &= ~DBSD));\
          _pop_(SFRPI);\
         )
    
/**
 *******************************************************************************
 * @brief	    Enable/Disable ADC interrupts.
 * @details
 * @param[in] \_\_STATE\_\_ : config ADC interrupts
 *      	    This parameter can be: ENABLE or DISABLE.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_IT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_IT_Cmd(__STATE__)\
          (__STATE__==ENABLE?(EIE1 |= EADC):(EIE1 &= ~(EADC)));\

/**
 *******************************************************************************
 * @brief	    Enable/Disable ADC sample flag interrupt
 * @details
 * @param[in] \_\_STATE\_\_ :  config sample flag interrupt
 *      	    This parameter can be: ENABLE or DISABLE.
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_SampleFlag_IT(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_SampleFlag_IT(__STATE__)\
      MWT(\
          _push_ (SFRPI);\
          __DRV_ADC_ClearSampleFlag();\
          __DRV_SFR_PageIndex(1);\
          (__STATE__==ENABLE?(ADCFG1 |= SMPFIE):(ADCFG1 &= ~SMPFIE));\
          _pop_(SFRPI);\
          )
    
/**
 *******************************************************************************
 * @brief	    Initialize the ADC
 * @details
 * @return 	  None
 * @note
 * @par         Example 
 * @code
 *    __DRV_ADC_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define   __DRV_ADC_Wizard_Init()\
      MWT(\
        __DRV_ADC_Enable();\
        __DRV_ADC_TriggerSource_Select(__ADC_TRG__);\
        __DRV_ADC_DataAlignment_Select(__ADC_DATAALIGNMENT__);\
        __DRV_ADC_ClockSource_Select(__ADC_CLKS__);\
        __DRV_ADC_PinMux_Select(__ADC_CHL__);\
        if (__WINDOW_DETECT_EN__)\
        {\
          __DRV_ADC_WindowDetectMode_Select(__ADC_WD_MODE__);\
          __DRV_ADC_SetHigherThreshold(__ADC_WD_HB__);\
          __DRV_ADC_SetLowerThreshold(__ADC_WD_LB__);\
        }\
        if (__SCAN_LOOP_EN__)\
          __DRV_ScanLoopChannel_Config(SCAN_LOOP_PIN,ENABLE);\
        )

      
#endif
