/**
  ******************************************************************************
  * @file       MainPage.h
  * @author     Neil Lab :: Left Radio
  * @version    v1.0.0
  * @date       2015-11-28 02:21:24.809687
  * @brief      
  ******************************************************************************
**/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAINPAGE_SEEKBARS_H
#define __MAINPAGE_SEEKBARS_H

/* Includes ------------------------------------------------------------------*/
#include "NGL.h"

/* Exported define -----------------------------------------------------------*/
#define MAINPAGE_SEEKBARS_CNT		1

/* Exported macro ------------------------------------------------------------*/

/* Exported typedef ----------------------------------------------------------*/

/* Exported function ---------------------------------------------------------*/
static void nglSeekBar_2_click(void);

/* Internal variables --------------------------------------------------------*/

/* Exported variables --------------------------------------------------------*/
/* MainPage nglSeekBar_2 item */
NGL_SeekBar nglSeekBar_2 = {
    130, 5, 460, 40,     // coordinates
    12,              // slider size
    (uint16_t)(65535), (uint16_t)(65535),     // old slider positions
    NGL_Horizontal,                // orientation
    0, 100,   // min/max levels
    65,                    // level
    ENABLE,             // show progress level
    0x394,                    // main seekbar color
    0x84ef,              // slider color
    nglSeekBar_2_click,                  // click func pointer
};



static const NGL_SeekBar* mainpage_seekbars[MAINPAGE_SEEKBARS_CNT] = {&nglSeekBar_2, };



#endif /* __MAINPAGE_SEEKBARS_H */
/*******************************************************************************
      END FILE
*******************************************************************************/