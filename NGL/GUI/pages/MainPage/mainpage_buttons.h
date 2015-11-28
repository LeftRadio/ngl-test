/**
  ******************************************************************************
  * @file       MainPage.h
  * @author     Neil Lab :: Left Radio
  * @version    v1.0.0
  * @date       2015-11-28 02:21:24.846689
  * @brief      
  ******************************************************************************
**/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAINPAGE_BUTTONS_H
#define __MAINPAGE_BUTTONS_H

/* Includes ------------------------------------------------------------------*/
#include "NGL.h"

/* Exported define -----------------------------------------------------------*/
#define MAINPAGE_BUTTONS_CNT		4

/* Exported macro ------------------------------------------------------------*/

/* Exported typedef ----------------------------------------------------------*/

/* Exported function ---------------------------------------------------------*/
static void btnSourse_click(void);
static void btnVisual_click(void);
static void btnSettings_click(void);
static void btnControls_click(void);

/* Internal variables --------------------------------------------------------*/

/* Exported variables --------------------------------------------------------*/
/* MainPage btnSourse item */
NGL_Button btnSourse = {
    420,
    178,
    56,
    43,
    IconButton,
    0xc000,
    0xc000,
    TRUE,
    (NGL_Bitmap*)&Controls,
    (NGL_Font*)&ms_shell_dlg_2_8_normal,
    0,
    0,
    0xb5df,
    "Sourse",
    ReClick_ENABLE,
    TRUE,
    ENABLE,
    btnSourse_click,
};

/* MainPage btnControls item */
NGL_Button btnControls = {
    420,
    68,
    56,
    43,
    IconButton,
    0xc000,
    0xc000,
    TRUE,
    (NGL_Bitmap*)&Control_Panel,
    (NGL_Font*)&ms_shell_dlg_2_8_normal,
    0,
    0,
    0xb5df,
    "Controls",
    ReClick_ENABLE,
    TRUE,
    ENABLE,
    btnControls_click,
};

/* MainPage btnVisual item */
NGL_Button btnVisual = {
    420,
    233,
    56,
    43,
    IconButton,
    0xc000,
    0xc000,
    TRUE,
    (NGL_Bitmap*)&visual,
    (NGL_Font*)&ms_shell_dlg_2_8_normal,
    0,
    0,
    0xb5df,
    "Visual",
    ReClick_ENABLE,
    TRUE,
    ENABLE,
    btnVisual_click,
};

/* MainPage btnSettings item */
NGL_Button btnSettings = {
    420,
    123,
    56,
    43,
    IconButton,
    0xc000,
    0xc000,
    TRUE,
    (NGL_Bitmap*)&Settings,
    (NGL_Font*)&ms_shell_dlg_2_8_normal,
    0,
    0,
    0xb5df,
    "Settings",
    ReClick_ENABLE,
    TRUE,
    ENABLE,
    btnSettings_click,
};


static const NGL_Button* mainpage_buttons[MAINPAGE_BUTTONS_CNT] = {&btnSourse, &btnControls, &btnVisual, &btnSettings, };



#endif /* __MAINPAGE_BUTTONS_H */
/*******************************************************************************
      END FILE
*******************************************************************************/