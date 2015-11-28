/**
  ******************************************************************************
  * @file       MainPage.h
  * @author     Neil Lab :: Left Radio
  * @version    v1.0.0
  * @date       2015-11-28 02:21:24.853689
  * @brief      
  ******************************************************************************
**/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAINPAGE_GRAPHSCALES_H
#define __MAINPAGE_GRAPHSCALES_H

/* Includes ------------------------------------------------------------------*/
#include "NGL.h"

/* Exported define -----------------------------------------------------------*/
#define MAINPAGE_GRAPHSCALES_CNT		2

/* Exported macro ------------------------------------------------------------*/

/* Exported typedef ----------------------------------------------------------*/

/* Exported function ---------------------------------------------------------*/

/* Internal variables --------------------------------------------------------*/

/* Exported variables --------------------------------------------------------*/
/* MainPage ngGraphScale_2 item */
NGL_GraphScale ngGraphScale_2 = {
    25, 269, 401, 286,     // coordinates
    -90, 0,       // min/max levels
    -3,                // scale cent
    {-90, -60, -42, -30, -24, -18, -12, -6,  -0},                   // labels
    9,               // labels count
    "dB",                    // scale units
    ENABLE,               // show labels state
    ENABLE,                // show lines state
    ENABLE,                     // flip
    NGL_Horizontal,              // vertical/horizontal orientation
    (NGL_Font*)&ms_shell_dlg_2_8_normal,
    0xffff
};

/* MainPage ngGraphScale item */
NGL_GraphScale ngGraphScale = {
    25, 140, 401, 155,     // coordinates
    -90, 0,       // min/max levels
    -3,                // scale cent
    {-90, -60, -42, -30, -24, -18, -12, -6,  -0},                   // labels
    9,               // labels count
    "dB",                    // scale units
    ENABLE,               // show labels state
    ENABLE,                // show lines state
    DISABLE,                     // flip
    NGL_Horizontal,              // vertical/horizontal orientation
    (NGL_Font*)&ms_shell_dlg_2_8_normal,
    0xffff
};


static const NGL_GraphScale* mainpage_graphscales[MAINPAGE_GRAPHSCALES_CNT] = {&ngGraphScale_2, &ngGraphScale, };



#endif /* __MAINPAGE_GRAPHSCALES_H */
/*******************************************************************************
      END FILE
*******************************************************************************/