/**
  ******************************************************************************
  * @file       MainPage.h
  * @author     Neil Lab :: Left Radio
  * @version    v1.0.0
  * @date       2015-11-28 02:21:24.869690
  * @brief      
  ******************************************************************************
**/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAINPAGE_FILLBARS_H
#define __MAINPAGE_FILLBARS_H

/* Includes ------------------------------------------------------------------*/
#include "NGL.h"

/* Exported define -----------------------------------------------------------*/
#define MAINPAGE_FILLBARS_CNT		8

/* Exported macro ------------------------------------------------------------*/

/* Exported typedef ----------------------------------------------------------*/

/* Exported function ---------------------------------------------------------*/

/* Internal variables --------------------------------------------------------*/

/* Exported variables --------------------------------------------------------*/
/* MainPage fillBar_CH8 item */
NGL_FillBar fillBar_CH8 = {
    25, 162, 389, 171,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    2,                    // level
    25, 162,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};

/* MainPage fillBar_CH6 item */
NGL_FillBar fillBar_CH6 = {
    25, 189, 389, 198,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    4,                    // level
    25, 189,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};

/* MainPage fillBar_CH3 item */
NGL_FillBar fillBar_CH3 = {
    25, 228, 389, 237,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    1,                    // level
    25, 228,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};

/* MainPage fillBar_CH1 item */
NGL_FillBar fillBar_CH1 = {
    25, 255, 389, 264,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    50,                    // level
    25, 255,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};

/* MainPage fillBar_CH7 item */
NGL_FillBar fillBar_CH7 = {
    25, 174, 389, 183,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    2,                    // level
    25, 174,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};

/* MainPage fillBar_CH4 item */
NGL_FillBar fillBar_CH4 = {
    25, 216, 389, 225,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    1,                    // level
    25, 216,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};

/* MainPage fillBar_CH2 item */
NGL_FillBar fillBar_CH2 = {
    25, 243, 389, 252,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    50,                    // level
    25, 243,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};

/* MainPage fillBar_CH5 item */
NGL_FillBar fillBar_CH5 = {
    25, 201, 389, 210,     // coordinates
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    4,                    // level
    25, 201,             // old level coords (used for lcd draw optimization)
    ENABLE,              // log mode
    90,             // full scale dB (only for log mode)
    DISABLE,                   // draw border state
    ENABLE,                  // draw markers state
    0xfe70,             // markers color
    0x2630                     // main fillbar color
};


static const NGL_FillBar* mainpage_fillbars[MAINPAGE_FILLBARS_CNT] = {&fillBar_CH8, &fillBar_CH6, &fillBar_CH3, &fillBar_CH1, &fillBar_CH7, &fillBar_CH4, &fillBar_CH2, &fillBar_CH5, };



#endif /* __MAINPAGE_FILLBARS_H */
/*******************************************************************************
      END FILE
*******************************************************************************/