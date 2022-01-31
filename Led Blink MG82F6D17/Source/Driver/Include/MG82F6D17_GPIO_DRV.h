 /**
 ******************************************************************************
 *
 * @file        MG82F6D17_GPIO_DRV.h
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


#ifndef _MG82F6D17_GPIO_DRV_H
#define _MG82F6D17_GPIO_DRV_H
/// @cond GPIO_Paramter
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//<h> Initialize GPIO
//<i> This will help you set up GPIO modes.
//  <h> GPIO Mode Control
//  <i> Set up IO modes.
//      <h> Port 1 Mode Assignment
//      <i> Specify Port 1 mode.
//          <o0> P10 <0x01010001=> Analog Input Only (Default) <0x01010101=> Open Drain with Pull-up Resistor <0x01010000=> Open Drain <0x01010100=> Push Pull
//          <o1> P11 <0x02020002=> Analog Input Only (Default) <0x02020202=> Open Drain with Pull-up Resistor <0x02020000=> Open Drain <0x02020200=> Push Pull
//          <o2> P15 <0x20200020=> Analog Input Only (Default) <0x20202020=> Open Drain with Pull-up Resistor <0x20200000=> Open Drain <0x20202000=> Push Pull
//          <o3> P16 <0x40400040=> Analog Input Only (Default) <0x40404040=> Open Drain with Pull-up Resistor <0x40400000=> Open Drain <0x40404000=> Push Pull
//          <o4> P17 <0x80800080=> Analog Input Only (Default) <0x80808080=> Open Drain with Pull-up Resistor <0x80800000=> Open Drain <0x80808000=> Push Pull
//      </h>
                #define P10_MODE   0x1010001
                #define P11_MODE   0x2020002
                #define P15_MODE   0x20200020
                #define P16_MODE   0x40400040
                #define P17_MODE   0x80800080
                #define P1_MODE    (P10_MODE | P11_MODE | P15_MODE | P16_MODE | P17_MODE)
//      <h> Port 2 Mode Assignment
//          <o0> P22 <0x04040004=> Analog Input Only (Default) <0x04040404=> Open Drain with Pull-up Resistor <0x04040000=> Open Drain <0x04040400=> Push Pull
//          <o1> P24 <0x10100010=> Analog Input Only (Default) <0x10101010=> Open Drain with Pull-up Resistor <0x10100000=> Open Drain <0x10101000=> Push Pull
//      </h>
                #define P22_MODE   0x4040004
                #define P24_MODE   0x10100010
                #define P2_MODE    (P22_MODE | P24_MODE)
//      <h> Port 3 Mode Assignment
//      <i> Specify Port 3 mode.
//          <o0> P30 <0x0001=> Push Pull <0x01010101=> Open Drain  <0x01010000=> Quasi-Bidirectional (Default) <0x01010100=> Input Only
//          <o1> P31 <0x0002=> Push Pull <0x02020202=> Open Drain  <0x02020000=> Quasi-Bidirectional (Default) <0x02020200=> Input Only
//          <o2> P33 <0x0008=> Push Pull <0x08080808=> Open Drain  <0x08080000=> Quasi-Bidirectional (Default) <0x08080800=> Input Only
//          <o3> P34 <0x0010=> Push Pull <0x10101010=> Open Drain  <0x10100000=> Quasi-Bidirectional (Default) <0x10101000=> Input Only
//          <o4> P35 <0x0020=> Push Pull <0x20202020=> Open Drain  <0x20200000=> Quasi-Bidirectional (Default) <0x20202000=> Input Only
//      </h>
                #define P30_MODE   0x1010000
                #define P31_MODE   0x2020000
                #define P33_MODE   0x0000008
                #define P34_MODE   0x00000010
                #define P35_MODE   0x00000020
                #define P3_MODE    (P30_MODE | P31_MODE | P33_MODE | P34_MODE | P35_MODE)

//      <h> Port 4 Mode Assignment
//      <i> Specify Por4 as GPIO or serves as OCD/RST function.
//          <o0> P44 <1=>OCDE (Default) <0x10100010=> Analog Input Only <0x10101010=> Open Drain with Pull-up Resistor <0x10100000=> Open Drain <0x10101000=> Push Pull 
//          <o1> P45 <1=>OCDE (Default) <0x20200020=> Analog Input Only <0x20202020=> Open Drain with Pull-up Resistor <0x20200000=> Open Drain <0x20202000=> Push Pull
//          <o2> P47 <1=>Reset (Default) <0x80800080=> Analog Input Only  <0x80808080=> Open Drain with Pull-up Resistor <0x80800000=> Open Drain <0x80808000=> Push Pull
//      </h>
                #define P44_MODE   0x0001
                #define P45_MODE   0x0001
                #define P47_MODE   0x0001
                #define P4_MODE    (P44_MODE | P45_MODE | P47_MODE)
                #define DCON0_OCDE (P44_MODE==0x0001)||(P45_MODE==0x0001)?1:0
                #define DCON0_RSTIO (P47_MODE==0x0001)?1:0

//      <h> Port 6 Mode Assignment
//      <i> Specify Port 6 mode.
//          <o0> P60 <0x01010001=> Analog Input Only (Default) <0x01010101=> Open Drain with Pull-up Resistor <0x01010000=> Open Drain <0x01010100=> Push Pull
//          <o1> P61 <0x02020002=> Analog Input Only (Default) <0x02020202=> Open Drain with Pull-up Resistor <0x02020000=> Open Drain <0x02020200=> Push Pull
//      </h>
                #define P60_MODE   0x1010001
                #define P61_MODE   0x2020002
                #define P6_MODE   (P60_MODE | P61_MODE)
//      </h>

//  <h> GPIO Output Driving Strength Control
//  <i> Specify port driving strength.
//      <h> Port1 Driving Strength Control
//      <i> Specify Port 1 driving strength.
//          <o0> P14 ~ P17 <0=> Low Driving Strength  <1=> High Driving Strength (Default)
//          <o1> P13 ~ P10 <0=> Low Driving Strength  <1=> High Driving Strength (Default)
//      </h>
                #define P1DC_0    1
                #define P1DC_1    1
//      <h> Port2 Driving Strength Control
//      <i> Specify Port 2 driving strength.
//          <o0> P27 ~ P24 <0=> Low Driving Strength  <1=> High Driving Strength (Default)
//          <o1> P23 ~ P20 <0=> Low Driving Strength  <1=> High Driving Strength (Default)
//      </h>
                #define P2DC_0    1
                #define P2DC_1    1
//      <h> Port3 Driving Strength Control
//      <i> Specify Port 3 driving strength.
//          <o0> P37 ~ P34 <0=> Low Driving Strength  <1=> High Driving Strength (Default)
//          <o1> P33 ~ P30 <0=> Low Driving Strength  <1=> High Driving Strength (Default)
//      </h>
                #define P3DC_0    1
                #define P3DC_1    1
//      <h> Port4 Driving Strength Control
//      <i> Specify Port 4 driving strength.
//          <o00> P44 ~ P46 <0=> Low Driving Strength  <1=> High Driving Strength (Default)
//      </h>
                #define P4DC_1    1
//  </h>

//      <h> GPIO Port Output Fast Driving Control
//      <i> Specify whether the port is fast or slow driving.
//          <h> Port1 Fast Driving Control
//          <i> Port1 fast/slow driving control set-up.
//              <o0> P10 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//              <o1> P11 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//              <o2> P15 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//              <o3> P16 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//              <o4> P17 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//      </h>
                    #define P1FDC_0   0
                    #define P1FDC_1   0
                    #define P1FDC_5   0
                    #define P1FDC_6   0
                    #define P1FDC_7   0
                    #define P1_FDC    (P1FDC_0 | (P1FDC_1 << 1) | (P1FDC_5 << 5) | (P1FDC_6 << 6) | (P1FDC_7 << 7))

//      <h> Port2 Fast Driving Control
//      <i> Port2 fast/slow driving control set-up.
//          <o0> P22 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//          <o1> P24 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//      </h>
                    #define P2FDC_2   0
                    #define P2FDC_4   0
                    #define P2_FDC     ((P2FDC_2 << 2) | (P2FDC_4 << 4))


//      <h> Port3 Fast Driving Control
//      <i> Port3 fast/slow driving control set-up.
//          <o0> P30 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//          <o1> P31 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//          <o2> P33 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//          <o3> P34 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//          <o4> P35 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//      </h>
                    #define P3FDC_0   0
                    #define P3FDC_1   0
                    #define P3FDC_3   0
                    #define P3FDC_4   0
                    #define P3FDC_5   0
                    #define P3_FDC     ((P3FDC_0 << 0) | (P3FDC_1 << 1) | (P3FDC_3 << 3) | (P3FDC_4 << 4) | (P3FDC_5 << 5))

//      <h> Port4 Fast Driving Control
//      <i> Port4 fast/slow driving control set-up.
//          <o0> P44 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//          <o1> P45 <0=> Disable Fast Driving (Default) <1=> Enable Fast Driving
//      </h>
                    #define P4FDC_4   0
                    #define P4FDC_5   0
                    #define P4_FDC     ((P4FDC_4 << 4) | (P4FDC_5 << 5))
//  </h>
//</h>

//<h> GPIO Port Protection
//<i> Users can activate writing protection of Port4/6 using this option. Then, only PageP access can modify.
        //<o0> Port 4 <0=> Disable (Default) <1=> Enable
        //<i> Enable, only PageP access can modify P4. Modifications in Page 0~F are not allowed.
        //<o1> Port 6 <0=> Disable (Default) <1=> Enable
        //<i> Enable, only PageP access can modify P6. Modifications in Page 0~F are not allowed.
        #define     SPCON0_P4CTL    0
        #define     SPCON0_P6CTL    0
//</h>
// <<< end of configuration section >>>

/*--------------------------------------------------------------
GPIO Function :
    1.Port4 Alternated Function Control
        |----P44 , P45 Function : __DRV_GPIO_SetOCD2IO(__STATE__);
        |----P47 Function : __DRV_GPIO_SetRST2IO(__STATE__);
        __STATE__ :
            ENABLE/DISABLE

    2.GPIO Mode Control
        |----Port 1 Mode Assignment : __DRV_GPIO_P1ModeSelect(__MODE__);
        |----Port 2 Mode Assignment : __DRV_GPIO_P2ModeSelect(__MODE__);
        |----Port 3 Mode Assignment : __DRV_GPIO_P3ModeSelect(__MODE__);
        |----Port 4 Mode Assignment : __DRV_GPIO_P4ModeSelect(__MODE__);
        |----Port 6 Mode Assignment : __DRV_GPIO_P6ModeSelect(__MODE__);
        __MODE__ :
            P1ALL_InputOnly         P10_InputOnly           P11_InputOnly           P15_InputOnly           P16_InputOnly           P17_InputOnly
            P1ALL_OpenDrainPullUp   P10_OpenDrainPullUp     P11_OpenDrainPullUp     P15_OpenDrainPullUp     P16_OpenDrainPullUp     P17_OpenDrainPullUp
            P1ALL_OpenDrain         P10_OpenDrain           P11_OpenDrain           P15_OpenDrain           P16_OpenDrain           P17_OpenDrain
            P1ALL_PushPull          P10_PushPull            P11_PushPull            P15_PushPull            P16_PushPull            P17_PushPull

            P2ALL_InputOnly         P22_InputOnly           P24_InputOnly
            P2ALL_OpenDrainPullUp   P22_OpenDrainPullUp     P24_OpenDrainPullUp
            P2ALL_OpenDrain         P22_OpenDrain           P24_OpenDrain
            P2ALL_PushPull          P22_PushPull            P24_PushPull

            P3ALL_QuasiMode         P30_QuasiMode           P31_QuasiMode           P33_QuasiMode           P34_QuasiMode           P35_QuasiMode
            P3ALL_PushPull          P30_PushPull            P31_PushPull            P33_PushPull            P34_PushPull            P35_PushPull
            P3ALL_InputOnly         P30_InputOnly           P31_InputOnly           P33_InputOnly           P34_InputOnly           P35_InputOnly
            P3ALL_OpenDrain         P30_OpenDrain           P31_OpenDrain           P33_OpenDrain           P34_OpenDrain            P35_OpenDrain

            P4ALL_InputOnly         P44_InputOnly           P45_InputOnly           P47_InputOnly
            P4ALL_OpenDrainPullUp   P44_OpenDrainPullUp     P45_OpenDrainPullUp     P47_OpenDrainPullUp
            P4ALL_OpenDrain         P44_OpenDrain           P45_OpenDrain           P47_OpenDrain
            P4ALL_PushPull          P44_PushPull            P45_PushPull            P47_PushPull

            P6ALL_InputOnly         P60_InputOnly           P61_InputOnly
            P6ALL_OpenDrainPullUp   P60_OpenDrainPullUp     P61_OpenDrainPullUp
            P6ALL_OpenDrain         P60_OpenDrain           P61_OpenDrain
            P6ALL_PushPull          P60_PushPull            P61_PushPull

    3.GPIO Output Driving Strength Control
        |----Port1 Driving Strength Control : __DRV_GPIO_P1OutputDrivingConfig(__PORT__,__STATE__);
        |----Port2 Driving Strength Control : __DRV_GPIO_P2OutputDrivingConfig(__PORT__,__STATE__);
        |----Port3 Driving Strength Control : __DRV_GPIO_P3OutputDrivingConfig(__PORT__,__STATE__);
        |----Port4 Driving Strength Control : __DRV_GPIO_P4OutputDrivingConfig(__PORT__,__STATE__);
        __PORT__ :
            P10_to_P13_Driving / P14_to_P17_Driving
            P20_to_P23_Driving / P24_to_P27_Driving
            P30_to_P33_Driving / P34_to_P37_Driving
            P44_to_P46_Driving
        __STATE__ :
            HIGH / LOW

    4.GPIO Port Output Fast Driving Control
        |----Port1 Fast Driving Control : __DRV_GPIO_SetP1FastDriving(__PORT__,__STATE__);
        |----Port2 Fast Driving Control : __DRV_GPIO_SetP2FastDriving(__PORT__,__STATE__);
        |----Port3 Fast Driving Control : __DRV_GPIO_SetP3FastDriving(__PORT__,__STATE__);
        |----Port4 Fast Driving Control : __DRV_GPIO_SetP4FastDriving(__PORT__,__STATE__);
        __PORT__ :
            P1PinALL    P1Pin0      P1Pin1      P1Pin5      P1Pin6      P1Pin7
            P2PinALL    P2Pin0      P2Pin1
            P3PinALL    P3Pin0      P3Pin1      P3Pin3      P3Pin4      P3Pin5
            P4PinALL    P4Pin4      P4Pin5      P4Pin7
            P6PinALL    P6Pin0      P6Pin1
        __STATE__ :
            FAST / NORMAL

    5.GPIO Port Protect
        |----Port4 : __DRV_GPIO_ProtectP4(__STATE__);
        |----Port6 : __DRV_GPIO_ProtectP6(__STATE__);
        __STATE__ :
            ENABLE/DISABLE

    *Other GPIO Function
        |----Default Init : __DRV_GPIO_PxDeInit(void); (x = 1,2,3,4,6)
        |----Write : __DRV_GPIO_WritePx(__PORT__, __VALUE__); (x = 1,2,3,4,6)
        |----Read : __DRV_GPIO_ReadPx(__DATA__); (x = 1,2,3,4,6)
        |----Inverse : __DRV_GPIO_InversePinPx(__PORT_PIN__); (x = 1,2,3,4,6)
--------------------------------------------------------------*/



typedef enum{
    HIGH = 0x01,
    LOW = 0x00,
}__STRENGTH_Def;

typedef enum{
    FAST = 0x01,
    NORMAL = 0x00,
}__SPEED_Def;

//!@{
//! defgroup P1Pinx Pin number
#define P1PinALL                (0xE3)
#define P1Pin0                  (0x01)
#define P1Pin1                  (0x02)
#define P1Pin5                  (0x20)
#define P1Pin6                  (0x40)
#define P1Pin7                  (0x80)
//!@}

//!@{
//! defgroup P2Pinx Pin number
#define P2PinALL                (0x14)

#define P2Pin2                  (0x04)
#define P2Pin4                  (0x10)
//!@}

//!@{
//! defgroup P3Pinx Pin number
#define P3PinALL                (0x3B)

#define P3Pin0                  (0x01)
#define P3Pin1                  (0x02)
#define P3Pin3                  (0x08)
#define P3Pin4                  (0x10)
#define P3Pin5                  (0x20)
//!@}

//!@{
//! defgroup P4Pinx Pin number
#define P4PinALL                (0xB0)

#define P4Pin4                  (0x10)
#define P4Pin5                  (0x20)
#define P4Pin7                  (0x80)
//!@}

//!@{
//! defgroup P1Pinx Pin number
#define P6PinALL                (0x03)

#define P6Pin0                  (0x01)
#define P6Pin1                  (0x02)
//!@}
//posite => high word , value => low word

//!@{
//! defgroup P0IOMODE Port0 IO mode
#define P1ALL_InputOnly         (0xE3E300FF)
#define P1ALL_OpenDrainPullUp   (0xE3E3FFFF)
#define P1ALL_OpenDrain         (0xE3E30000)
#define P1ALL_PushPull          (0xE3E3FF00)

#define P10_InputOnly           (0x01010001)
#define P10_OpenDrainPullUp     (0x01010101)
#define P10_OpenDrain           (0x01010000)
#define P10_PushPull            (0x01010100)
#define P11_InputOnly           (0x02020002)
#define P11_OpenDrainPullUp     (0x02020202)
#define P11_OpenDrain           (0x02020000)
#define P11_PushPull            (0x02020200)
#define P15_InputOnly           (0x20200020)
#define P15_OpenDrainPullUp     (0x20202020)
#define P15_OpenDrain           (0x20200000)
#define P15_PushPull            (0x20202000)
#define P16_InputOnly           (0x40400040)
#define P16_OpenDrainPullUp     (0x40404040)
#define P16_OpenDrain           (0x40400000)
#define P16_PushPull            (0x40404000)
#define P17_InputOnly           (0x80800080)
#define P17_OpenDrainPullUp     (0x80808080)
#define P17_OpenDrain           (0x80800000)
#define P17_PushPull            (0x80808000)
//!@}

//!@{
//! defgroup P2IOMODE Port0 IO mode
#define P2ALL_InputOnly         (0x141400FF)
#define P2ALL_OpenDrainPullUp   (0x1414FFFF)
#define P2ALL_OpenDrain         (0x14140000)
#define P2ALL_PushPull          (0x1414FF00)

#define P22_InputOnly           (0x04040004)
#define P22_OpenDrainPullUp     (0x04040404)
#define P22_OpenDrain           (0x04040000)
#define P22_PushPull            (0x04040400)
#define P24_InputOnly           (0x10100010)
#define P24_OpenDrainPullUp     (0x10101010)
#define P24_OpenDrain           (0x10100000)
#define P24_PushPull            (0x10101000)
//!@}

//!@{
//! defgroup P3IOMODE Port0 IO mode
#define P3ALL_QuasiMode         (0x3B3B0000)
#define P3ALL_PushPull          (0x3B3B00FF)
#define P3ALL_InputOnly         (0x3B3BFF00)
#define P3ALL_OpenDrain         (0x3B3BFFFF)

#define P30_QuasiMode           (0x01010000)
#define P30_PushPull            (0x01010001)
#define P30_InputOnly           (0x01010100)
#define P30_OpenDrain           (0x01010101)
#define P31_QuasiMode           (0x02020000)
#define P31_PushPull            (0x02020002)
#define P31_InputOnly           (0x02020200)
#define P31_OpenDrain           (0x02020202)
#define P33_QuasiMode           (0x08080000)
#define P33_PushPull            (0x08080008)
#define P33_InputOnly           (0x08080800)
#define P33_OpenDrain           (0x08080808)
#define P34_QuasiMode           (0x10100000)
#define P34_PushPull            (0x10100010)
#define P34_InputOnly           (0x10101000)
#define P34_OpenDrain           (0x10101010)
#define P35_QuasiMode           (0x20200000)
#define P35_PushPull            (0x20200020)
#define P35_InputOnly           (0x20202000)
#define P35_OpenDrain           (0x20202020)
//!@}



//!@{
//! defgroup P4IOMODE Port0 IO mode
#define P4ALL_InputOnly         (0xB0B000FF)
#define P4ALL_OpenDrainPullUp   (0xB0B0FFFF)
#define P4ALL_OpenDrain         (0xB0B00000)
#define P4ALL_PushPull          (0xB0B0FF00)

#define P44_InputOnly           (0x10100010)
#define P44_OpenDrainPullUp     (0x10101010)
#define P44_OpenDrain           (0x10100000)
#define P44_PushPull            (0x10101000)
#define P45_InputOnly           (0x20200020)
#define P45_OpenDrainPullUp     (0x20202020)
#define P45_OpenDrain           (0x20200000)
#define P45_PushPull            (0x20202000)
#define P47_InputOnly           (0x80800080)
#define P47_OpenDrainPullUp     (0x80808080)
#define P47_OpenDrain           (0x80800000)
#define P47_PushPull            (0x80808000)
//!@}

//!@{
//! defgroup P6IOMODE Port0 IO mode
#define P6ALL_InputOnly         (0x030300FF)
#define P6ALL_OpenDrainPullUp   (0x0303FFFF)
#define P6ALL_OpenDrain         (0x03030000)
#define P6ALL_PushPull          (0x0303FF00)

#define P60_InputOnly           (0x01010001)
#define P60_OpenDrainPullUp     (0x01010101)
#define P60_OpenDrain           (0x01010000)
#define P60_PushPull            (0x01010100)
#define P61_InputOnly           (0x02020002)
#define P61_OpenDrainPullUp     (0x02020202)
#define P61_OpenDrain           (0x02020000)
#define P61_PushPull            (0x02020200)

//!@{
//! defgroup Pack_Port_Pins
#define P10_to_P13_Driving      P1DC0
#define P14_to_P17_Driving      P1DC1
#define P20_to_P23_Driving      P2DC0
#define P24_to_P27_Driving      P2DC1
#define P30_to_P33_Driving      P3DC0
#define P34_to_P37_Driving      P3DC1
#define P44_to_P46_Driving      P4DC1
//!@}

//!@}
/// @endcond

/**
 *******************************************************************************
 * @brief       Initializing Port1 IO mode
 * @details
 * @param[in]   \_\_MODE\_\_ :  specifies the Port1 mode.
 *  @arg\b      P1ALL_InputOnly
 *  @arg\b      P1ALL_OpenDrainPullUp
 *  @arg\b      P1ALL_OpenDrain
 *  @arg\b      P1ALL_PushPull
 *  @arg\b      P10_InputOnly
 *  @arg\b      P10_OpenDrainPullUp
 *  @arg\b      P10_OpenDrain
 *  @arg\b      P10_PushPull
 *  @arg\b      P11_InputOnly
 *  @arg\b      P11_OpenDrainPullUp
 *  @arg\b      P11_OpenDrain
 *  @arg\b      P11_PushPull
 *  @arg\b      P15_InputOnly
 *  @arg\b      P15_OpenDrainPullUp
 *  @arg\b      P15_OpenDrain
 *  @arg\b      P15_PushPull
 *  @arg\b      P16_InputOnly
 *  @arg\b      P16_OpenDrainPullUp
 *  @arg\b      P16_OpenDrain
 *  @arg\b      P16_PushPull
 *  @arg\b      P17_InputOnly
 *  @arg\b      P17_OpenDrainPullUp
 *  @arg\b      P17_OpenDrain
 *  @arg\b      P17_PushPull
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P1ModeSelect(P11_OpenDrainPullUp);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P1ModeSelect(__MODE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0);\
        P1M0 &= ~(HIBYTE(HIWORD(__MODE__)));\
        P1M0 |= (HIBYTE(LOWORD(__MODE__)));\
        __DRV_SFR_PageIndex(0); \
        P1M1 &= ~(LOBYTE(HIWORD(__MODE__)));\
        P1M1 |= (LOBYTE(LOWORD(__MODE__)));\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Initializing Port2 IO mode
 * @details
 * @param[in]   \_\_MODE\_\_ :  specifies the Port2 mode.
 *  @arg\b      P2ALL_InputOnly
 *  @arg\b      P2ALL_OpenDrainPullUp
 *  @arg\b      P2ALL_OpenDrain
 *  @arg\b      P2ALL_PushPull
 *  @arg\b      P22_InputOnly
 *  @arg\b      P22_OpenDrainPullUp
 *  @arg\b      P22_OpenDrain
 *  @arg\b      P22_PushPull
 *  @arg\b      P24_InputOnly
 *  @arg\b      P24_OpenDrainPullUp
 *  @arg\b      P24_OpenDrain
 *  @arg\b      P24_PushPull
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P2ModeSelect(P22_OpenDrainPullUp);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P2ModeSelect(__MODE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0);\
        P2M0 &= ~(HIBYTE(HIWORD(__MODE__)));\
        P2M0 |= (HIBYTE(LOWORD(__MODE__)));\
        __DRV_SFR_PageIndex(1);\
        P2M1 &= ~(LOBYTE(HIWORD(__MODE__)));\
        P2M1 |= (LOBYTE(LOWORD(__MODE__)));\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Initializing Port3 IO mode
 * @details
 * @param[in]   \_\_MODE\_\_ :  specifies the Port3 mode.
 *  @arg\b      P3ALL_QuasiMode
 *  @arg\b      P3ALL_PushPull
 *  @arg\b      P3ALL_InputOnly
 *  @arg\b      P3ALL_OpenDrain
 *  @arg\b      P30_QuasiMode
 *  @arg\b      P30_PushPull
 *  @arg\b      P30_InputOnly
 *  @arg\b      P30_OpenDrain
 *  @arg\b      P31_QuasiMode
 *  @arg\b      P31_PushPull
 *  @arg\b      P31_InputOnly
 *  @arg\b      P31_OpenDrain
 *  @arg\b      P33_QuasiMode
 *  @arg\b      P33_PushPull
 *  @arg\b      P33_InputOnly
 *  @arg\b      P33_OpenDrain
 *  @arg\b      P34_QuasiMode
 *  @arg\b      P34_PushPull
 *  @arg\b      P34_InputOnly
 *  @arg\b      P34_OpenDrain
 *  @arg\b      P35_QuasiMode
 *  @arg\b      P35_PushPull
 *  @arg\b      P35_InputOnly
 *  @arg\b      P35_OpenDrain
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P3ModeSelect(P30_QuasiMode);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P3ModeSelect(__MODE__)\
    MWT(\
        P3M0 &= ~(HIBYTE(HIWORD(__MODE__)));\
        P3M0 |= (HIBYTE(LOWORD(__MODE__)));\
        P3M1 &= ~(LOBYTE(HIWORD(__MODE__)));\
        P3M1 |= (LOBYTE(LOWORD(__MODE__)));\
    )

/**
 *******************************************************************************
 * @brief       Initializing Port4 IO mode
 * @details
 * @param[in]   \_\_MODE\_\_ :  specifies the Port4 mode.
 *  @arg\b      P4ALL_InputOnly
 *  @arg\b      P4ALL_OpenDrainPullUp
 *  @arg\b      P4ALL_OpenDrain
 *  @arg\b      P4ALL_PushPull
 *  @arg\b      P44_InputOnly
 *  @arg\b      P44_OpenDrainPullUp
 *  @arg\b      P44_OpenDrain
 *  @arg\b      P44_PushPull
 *  @arg\b      P45_InputOnly
 *  @arg\b      P45_OpenDrainPullUp
 *  @arg\b      P45_OpenDrain
 *  @arg\b      P45_PushPull
 *  @arg\b      P47_InputOnly
 *  @arg\b      P47_OpenDrainPullUp
 *  @arg\b      P47_OpenDrain
 *  @arg\b      P47_PushPull
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P4ModeSelect(P44_InputOnly);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P4ModeSelect(__MODE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0);\
        P4M0 &= ~(HIBYTE(HIWORD(__MODE__)));\
        P4M0 |= (HIBYTE(LOWORD(__MODE__)));\
        __DRV_SFR_PageIndex(2);\
        P4M1 &= ~(LOBYTE(HIWORD(__MODE__)));\
        P4M1 |= (LOBYTE(LOWORD(__MODE__)));\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Default initial Port6 IO mode
 * @details
 * @param[in]   \_\_MODE\_\_ :  specifies the Port6 mode.
 *  @arg\b      P6ALL_InputOnly
 *  @arg\b      P6ALL_OpenDrainPullUp
 *  @arg\b      P6ALL_OpenDrain
 *  @arg\b      P6ALL_PushPull
 *  @arg\b      P60_InputOnly
 *  @arg\b      P60_OpenDrainPullUp
 *  @arg\b      P60_OpenDrain
 *  @arg\b      P60_PushPull
 *  @arg\b      P61_InputOnly
 *  @arg\b      P61_OpenDrainPullUp
 *  @arg\b      P61_OpenDrain
 *  @arg\b      P61_PushPull
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P6ModeSelect(P60_InputOnly);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P6ModeSelect(__MODE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(1);\
        P6M0 &= ~(HIBYTE(HIWORD(__MODE__)));\
        P6M0 |= (HIBYTE(LOWORD(__MODE__)));\
        __DRV_SFR_PageIndex(3);\
        P6M1 &= ~(LOBYTE(HIWORD(__MODE__)));\
        P6M1 |= (LOBYTE(LOWORD(__MODE__)));\
        _pop_(SFRPI) ;\
    )

/**
 *******************************************************************************
 * @brief       Default initial Port1 IO mode
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_GPIO_P1DeInit();
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P1DeInit()\
    MWT(\
        __DRV_GPIO_P1ModeSelect(P1ALL_InputOnly);\
    )

/**
 *******************************************************************************
 * @brief       Default initial Port2 IO mode
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_GPIO_P2DeInit();
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P2DeInit()\
    MWT(\
        __DRV_GPIO_P2ModeSelect(P2ALL_InputOnly);\
    )

/**
 *******************************************************************************
 * @brief       Default initial Port3 IO mode
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_GPIO_P3DeInit();
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P3DeInit()\
    MWT(\
        __DRV_GPIO_P3ModeSelect(P3ALL_QuasiMode);\
    )

/**
 *******************************************************************************
 * @brief       Default initial Port4 IO mode
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_GPIO_P4DeInit();
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P4DeInit()\
    MWT(\
        __DRV_GPIO_P4ModeSelect(P4ALL_InputOnly);\
    )

/**
 *******************************************************************************
 * @brief       Default initial Port6 IO mode
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_GPIO_P6DeInit();
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P6DeInit()\
    MWT(\
        __DRV_GPIO_P6ModeSelect(P6ALL_InputOnly);\
    )

/**
 *******************************************************************************
 * @brief       Writing GPIO's Port1 state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies a whole port or port pins.
 * @param[in]   \_\_VALUE\_\_ : specifies the value to be written.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_WriteP1(P10,1);
 *   __DRV_GPIO_WriteP1(P1,0x01);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_WriteP1(__PORT__, __VALUE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __PORT__=__VALUE__;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Writing GPIO's Port2 state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies a whole port or port pins.
 * @param[in]   \_\_VALUE\_\_ : specifies the value to be written.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Write(P20,1);
 *   __DRV_GPIO_Write(P2,0x01);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_WriteP2(__PORT__, __VALUE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __PORT__=__VALUE__;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Writing GPIO's Port3 state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies a whole port or port pins.
 * @param[in]   \_\_VALUE\_\_ : specifies the value to be written.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Write(P30,1);
 *   __DRV_GPIO_Write(P3,0x01);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_WriteP3(__PORT__, __VALUE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __PORT__=__VALUE__;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Writing GPIO's Port4 state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies a whole port or port pins.
 * @param[in]   \_\_VALUE\_\_ : specifies the value to be written.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Write(P45,1);
 *   __DRV_GPIO_Write(P4,0x10);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_WriteP4(__PORT__, __VALUE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __PORT__=__VALUE__;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Writing GPIO's Port6 state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies a whole port or port pins.
 * @param[in]   \_\_VALUE\_\_ : specifies the value to be written.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Write(P60,1);
 *   __DRV_GPIO_Write(P6,0x01);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_WriteP6(__PORT__, __VALUE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(1);\
         __PORT__=__VALUE__;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Reading GPIO's Port1 state.
 * @details
 * @param[out]   \_\_DATA\_\_ : the place to store data.
 * @return
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Read(P1);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_ReadP1(__DATA__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __DATA__ = P1;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Reading GPIO's Port2 state.
 * @details
 * @param[out]   \_\_DATA\_\_ : the place to store data.
 * @return
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Read(P2);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_ReadP2(__DATA__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __DATA__ = P2;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Reading GPIO's Port3 state.
 * @details
 * @param[out]   \_\_DATA\_\_ : the place to store data.
 * @return
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Read(P3);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_ReadP3(__DATA__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __DATA__ = P3;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Reading GPIO's Port4 state.
 * @details
 * @param[out]   \_\_DATA\_\_ : the place to store data.
 * @return
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Read(P4);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_ReadP4(__DATA__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(0);\
         __DATA__ = P4;\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Reading GPIO's Port6 state.
 * @details
 * @param[out]   \_\_DATA\_\_ : the place to store data.
 * @return
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_Read(P6);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_ReadP6(__DATA__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(1);\
         __DATA__ = P6;\
        _pop_(SFRPI);\
    )


/**
 *******************************************************************************
 * @brief       Inversing Port1 pin state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P1PinALL
 *  @arg\b      P1Pin0
 *  @arg\b      P1Pin1
 *  @arg\b      P1Pin5
 *  @arg\b      P1Pin6
 *  @arg\b      P1Pin7
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P1_InversePin(P10);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_InversePinP1(__PORT__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0);\
        __PORT__ = !(__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Inversing Port2 pin state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P2PinALL
 *  @arg\b      P2Pin0
 *  @arg\b      P2Pin1
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P2_InversePin(P10);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_InversePinP2(__PORT__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0);\
        __PORT__ = !(__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Inversing Port3 pin state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P3PinALL
 *  @arg\b      P3Pin0
 *  @arg\b      P3Pin1
 *  @arg\b      P3Pin3
 *  @arg\b      P3Pin4
 *  @arg\b      P3Pin5
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P3_InversePin(P10);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_InversePinP3(__PORT__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0);\
        __PORT__ = !(__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Inversing Port4 pin state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P4PinALL
 *  @arg\b      P4Pin4
 *  @arg\b      P4Pin5
 *  @arg\b      P4Pin7
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P4_InversePin(P10);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_InversePinP4(__PORT__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0);\
        __PORT__ = !(__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Inversing Port6 pin state.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P6PinALL
 *  @arg\b      P6Pin0
 *  @arg\b      P6Pin1
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_P6_InversePin(P10);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_InversePinP6(__PORT__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(1);\
        __PORT__ = !(__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Selecting Port1 driving current strength.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P10_to_P13_Driving
 *  @arg\b      P14_to_P17_Driving
 * @param[in]   \_\_STATE\_\_ : 
 *  @arg\b      HIGH : specifies P1 with high driving current strength.
 *  @arg\b      LOW : specifies P1 with low driving current strength.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_OutputDrivingConfig(P10_to_P13_Driving, HIGH);
 *   __DRV_GPIO_OutputDrivingConfig(P20_to_P23_Driving, LOW);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P1OutputDrivingConfig(__PORT__,__STATE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(2);\
        (__STATE__==HIGH) ? (PDRVC0|=__PORT__):(PDRVC0&=~__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Selecting Port2 driving current strength.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P20_to_P23_Driving
 *  @arg\b      P24_to_P27_Driving
 * @param[in]   \_\_STATE\_\_ : 
 *  @arg\b      HIGH : specifies P1 with high driving current strength.
 *  @arg\b      LOW : specifies P1 with low driving current strength.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_OutputDrivingConfig(P20_to_P23_Driving, HIGH);
 *   __DRV_GPIO_OutputDrivingConfig(P24_to_P27_Driving, LOW);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P2OutputDrivingConfig(__PORT__,__STATE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(2);\
        (__STATE__==HIGH) ? (PDRVC0|=__PORT__):(PDRVC0&=~__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Selecting Port3 driving current strength.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P30_to_P33_Driving
 *  @arg\b      P34_to_P37_Driving
 * @param[in]   \_\_STATE\_\_ : enables high driving or low driving.
 *  @arg\b      HIGH : specifies P1 with high driving current strength.
 *  @arg\b      LOW : specifies P1 with low driving current strength.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_OutputDrivingConfig(P30_to_P33_Driving, HIGH);
 *   __DRV_GPIO_OutputDrivingConfig(P30_to_P33_Driving, LOW);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P3OutputDrivingConfig(__PORT__,__STATE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(2);\
        (__STATE__==HIGH) ? (PDRVC0|=__PORT__):(PDRVC0&=~__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Selecting Port4 driving current strength.
 * @details
 * @param[in]   \_\_PORT\_\_ : specifies port pins
 *  @arg\b      P44_to_P46_Driving
 * @param[in]   \_\_STATE\_\_ : enables high driving or low driving.
 *  @arg\b      HIGH : specifies P1 with high driving current strength.
 *  @arg\b      LOW : specifies P1 with low driving current strength.
 * @return      None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_OutputDrivingConfig(P44_to_P46_Driving, HIGH);
 *   __DRV_GPIO_OutputDrivingConfig(P44_to_P46_Driving, LOW);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P4OutputDrivingConfig(__PORT__,__STATE__)\
    MWT(\
        _push_(SFRPI);\
         __DRV_SFR_PageIndex(3);\
        (__STATE__==HIGH) ? (PDRVC1|=__PORT__):(PDRVC1&=~__PORT__);\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Port1 pin output fast driving control.
 * @details
 * @param[in]   \_\_PORT\_\_ : port pin to enable fast driving.
 *  @arg\b      P1PinALL
 *  @arg\b      P1Pin0
 *  @arg\b      P1Pin1
 *  @arg\b      P1Pin5
 *  @arg\b      P1Pin6
 *  @arg\b      P1Pin7
 * @param[in]   \_\_STATE\_\_ : enables/disables fast driving.
 *  @arg\b      FAST : enables fast driving on port pin output.
 *  @arg\b      NORMAL : disables fast driving on port pin output.
 * @return  None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_SetP1FastDriving(P1PinALL, FAST);
 *   __DRV_GPIO_SetP1FastDriving(P1PinALL, NORMAL);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_SetP1FastDriving(__PORT__, __STATE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(8);\
        (__STATE__==FAST?(P1FDC|=(__PORT__)):\
         __STATE__==NORMAL?(P1FDC&=~(__PORT__)): nop());\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Port2 pin output fast driving control.
 * @details
 * @param[in]   \_\_PORT\_\_ : port pin to enable fast driving.
 *  @arg\b      P2PinALL
 *  @arg\b      P2Pin0
 *  @arg\b      P2Pin1
 * @param[in]   \_\_STATE\_\_ : enables/disables fast driving.
 *  @arg\b      FAST : enables fast driving on port pin output.
 *  @arg\b      NORMAL : disables fast driving on port pin output.
 * @return  None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_SetP2FastDriving(P2PinALL, FAST);
 *   __DRV_GPIO_SetP2FastDriving(P2PinALL, NORMAL);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_SetP2FastDriving(__PORT__, __STATE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(9);\
        (__STATE__==FAST?(P2FDC|=(__PORT__)):\
         __STATE__==NORMAL?(P2FDC&=~(__PORT__)): nop());\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Port3 pin output fast driving control.
 * @details
 * @param[in]   \_\_PORT\_\_ : port pin to enable fast driving.
 *  @arg\b      P3PinALL
 *  @arg\b      P3Pin0
 *  @arg\b      P3Pin1
 *  @arg\b      P3Pin3
 *  @arg\b      P3Pin4
 *  @arg\b      P3Pin5
 * @param[in]   \_\_STATE\_\_ : enables/disables fast driving.
 *  @arg\b      FAST : enables fast driving on port pin output.
 *  @arg\b      NORMAL : disables fast driving on port pin output.
 * @return  None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_SetP3FastDriving(P3PinALL, FAST);
 *   __DRV_GPIO_SetP3FastDriving(P3PinALL, NORMAL);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_SetP3FastDriving(__PORT__, __STATE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(7);\
        (__STATE__==FAST?(P3FDC|=(__PORT__)):\
         __STATE__==NORMAL?(P3FDC&=~(__PORT__)): nop());\
        _pop_(SFRPI);\
    )

/**
 *******************************************************************************
 * @brief       Port4 pin output fast driving control.
 * @details
 * @param[in]   \_\_PORT\_\_ : port pin to enable fast driving.
 *  @arg\b      P4PinALL
 *  @arg\b      P4Pin4
 *  @arg\b      P4Pin5
 *  @arg\b      P4Pin7
 * @param[in]   \_\_STATE\_\_ : enables/disables fast driving.
 *  @arg\b      FAST : enables fast driving on port pin output.
 *  @arg\b      NORMAL : disables fast driving on port pin output.
 * @return  None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_SetP4FastDriving(P4PinALL, FAST);
 *   __DRV_GPIO_SetP4FastDriving(P4PinALL, NORMAL);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_SetP4FastDriving(__PORT__, __STATE__)\
    MWT(\
        _push_(SFRPI);\
        __DRV_SFR_PageIndex(0xA);\
        (__STATE__==FAST?(P4FDC|=(__PORT__)):\
         __STATE__==NORMAL?(P4FDC&=~(__PORT__)): nop());\
        _pop_(SFRPI);\
    )


/**
 *******************************************************************************
 * @brief       OCD enable.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables OCD interface on P44 and P45
 *  @arg\b      ENABLE : enables OCD interface on P44 and P45.
 *  @arg\b      DISABLE : disables OCD interface on P44 and P45.
 * @return None
 * @note
 * @par Example
 * @code
 *   __DRV_GPIO_SetOCD2IO(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_SetOCD2IO(__STATE__)\
        MWT(\
            uint8_t P_data;\
            P_data = DRV_PageP_Read(DCON0_P);\
            P_data &= ~(OCDE_P);\
            __STATE__ == ENABLE ? DRV_PageP_Write(DCON0_P,P_data | OCDE_P): DRV_PageP_Write(DCON0_P,P_data);\
        )

/**
 *******************************************************************************
 * @brief       Reset function on I/O.
 * @details
 * @param[in]   \_\_STATE\_\_ : 
 *  @arg\b      ENABLE : selects I/O pad function for P47.
 *  @arg\b      DISABLE : selects I/O pad function for external reset input, RST.
 * @return      None
 * @note
 * @code
 *   __DRV_GPIO_SetRST2IO(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_SetRST2IO(__STATE__)\
        MWT(\
            uint8_t P_data;\
            P_data = DRV_PageP_Read(DCON0_P);\
            P_data &= ~(RSTIO_P);\
            __STATE__ == ENABLE ? DRV_PageP_Write(DCON0_P,P_data | RSTIO_P): DRV_PageP_Write(DCON0_P,P_data);\
        )


/**
 *******************************************************************************
 * @brief       P6 SFR access control.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables P6 SFR protection. 
 *  @arg\b      ENABLE : it will disable the P6 SFR modifications in page 0~F. P6 in page 0~F only keeps SFR read function.
 *                      But software always owns the modification capability in SFR Page P.
 *  @arg\b      DISABLE : modifications and read functions are both available in page 0~F and Page P.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_GPIO_P6_Protected(Enable);
 * @endcode
 *******************************************************************************
  */
#define __DRV_GPIO_P6_Protected(__STATE__)\
        MWT(\
            uint8_t P_data;\
            P_data = DRV_PageP_Read(SPCON0_P);\
            P_data &= ~(P6CTL_P);\
            __STATE__ == ENABLE ? DRV_PageP_Write(SPCON0_P,P_data | P6CTL_P): DRV_PageP_Write(SPCON0_P,P_data);\
        )


/**
 *******************************************************************************
 * @brief       P4 SFR access control.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables P4 SFR protection.
 *  @arg\b      ENABLE : it will disable the P4 SFR modifications in page 0~F. P4 in page 0~F only keeps SFR read function.
 *                      But software always owns the modification capability in SFR Page P.
 *  @arg\b      DISABLE : modifications and read functions are both available in page 0~F and Page P.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_GPIO_P4_Protected( ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_P4_Protected(__STATE__)\
        MWT(\
            uint8_t P_data;\
            P_data = DRV_PageP_Read(SPCON0_P);\
            P_data &= ~(P4CTL_P);\
            __STATE__ == ENABLE ? DRV_PageP_Write(SPCON0_P,P_data | P4CTL_P): DRV_PageP_Write(SPCON0_P,P_data);\
        )

/// @cond GPIO_Init_Macro
/**
 *******************************************************************************
 * @brief       Initializing GPIO.
 * @details
 * @return      None
 * @note
 * @code
 *  __DRV_GPIO_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_GPIO_Wizard_Init()\
    MWT(\
        __DRV_GPIO_P4_Protected(SPCON0_P4CTL);\
        __DRV_GPIO_P6_Protected(SPCON0_P6CTL);\
        __DRV_GPIO_SetOCD2IO(DCON0_OCDE);\
        __DRV_GPIO_SetRST2IO(DCON0_RSTIO);\
        __DRV_GPIO_P1ModeSelect(P1_MODE);\
        __DRV_GPIO_P2ModeSelect(P2_MODE);\
        __DRV_GPIO_P3ModeSelect(P3_MODE);\
        __DRV_GPIO_P4ModeSelect(P4_MODE);\
        __DRV_GPIO_P6ModeSelect(P6_MODE);\
        __DRV_GPIO_P1OutputDrivingConfig(P1DC0,P1DC_0);\
        __DRV_GPIO_P1OutputDrivingConfig(P1DC1,P1DC_1);\
        __DRV_GPIO_P2OutputDrivingConfig(P2DC0,P2DC_0);\
        __DRV_GPIO_P2OutputDrivingConfig(P2DC1,P2DC_1);\
        __DRV_GPIO_P3OutputDrivingConfig(P3DC0,P3DC_0);\
        __DRV_GPIO_P3OutputDrivingConfig(P3DC1,P3DC_1);\
        __DRV_GPIO_P4OutputDrivingConfig(P4DC1,P4DC_1);\
        __DRV_GPIO_SetP1FastDriving(P1_FDC ,FAST);\
        __DRV_GPIO_SetP2FastDriving(P2_FDC ,FAST);\
        __DRV_GPIO_SetP3FastDriving(P3_FDC ,FAST);\
        __DRV_GPIO_SetP4FastDriving(P4_FDC ,FAST);\
    )

/// @endcond
#endif
