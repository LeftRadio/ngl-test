/**
  ******************************************************************************
  * @file       MainPage.c
  * @author     Neil Lab :: Left Radio
  * @version    v1.0.0
  * @date       2015-11-28 02:21:24.794686
  * @brief      NGL Page MainPage sourse
  ******************************************************************************
**/

/* Define --------------------------------------------------------------------*/

/* Includes ------------------------------------------------------------------*/
#include "NGL.h"
#include "fonts.h"
#include "bitmaps.h"
#include "mainpage_seekbars.h"
#include "mainpage_buttons.h"
#include "mainpage_graphscales.h"
#include "mainpage_fillbars.h"
#include "mainpage_labels.h"


/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Extern functions ----------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
static void MainPage_Draw(void);
static void MainPage_Click(Coordinate data, NGL_TouchType type);

/* Private variables ---------------------------------------------------------*/
NGL_Page MainPage = {
    { 0, 0, 480, 320 },       // [X0, Y0, X1, Y1]
    0,               // ID
    0x18c3,           // BackColor
    TRUE,               // Exit allowed

    /* Objects pointers array (Buttons, Labels, FillBars, etc.) */
    {
        mainpage_buttons, 4, 
		mainpage_labels, 19, 
		mainpage_fillbars, 8, 
		mainpage_seekbars, 1, 
		mainpage_graphscales, 2, 
		
    },

    MainPage_Draw,    // Page draw function
    MainPage_Click,   // Page click (or index change) function
};

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  MainPage_Draw
  *         Draw page objects function
  * @param  None
  * @retval None
*/
static void MainPage_Draw(void)
{
	/* Clear all screen */
	NGL_LCD_Clear_AllScreen(0x18c3);

	/* Draw all static graphics primitive, labels, etc. */
	NGL_GP_DrawFillRect(5, 6, 119, 26, 0x83, DRAW, 0x83);
	NGL_Font_DrawString(20, 9, 0xf904, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "NeilLab :: leftradio");
	NGL_Font_DrawString(60, 22, 0xe79f, (NGL_Font*)&ms_shell_dlg_2_9_normal, Transparent, "v 1.5.2");
	NGL_Font_DrawString(12, 21, 0xe79f, (NGL_Font*)&ms_shell_dlg_2_12_normal, Transparent, "NT11");
	NGL_Font_DrawString(5, 253, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Lf:");
	NGL_Font_DrawString(5, 241, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Rf:");
	NGL_GP_DrawFillRect(5, 295, 475, 315, 0x106, DRAW, 0x106);
	NGL_Font_DrawString(5, 227, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Lf:");
	NGL_Font_DrawString(5, 215, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Rf:");
	NGL_Font_DrawString(5, 200, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Lf:");
	NGL_Font_DrawString(5, 188, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Rf:");
	NGL_Font_DrawString(5, 172, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Lf:");
	NGL_Font_DrawString(5, 160, 0xffff, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Rf:");
	NGL_GP_DrawLine(415, 279, 415, 54, 0xc000);
	NGL_GP_DrawLine(5, 44, 475, 44, 0xc000);
	NGL_Font_DrawString(415, 307, 0xf79f, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Channels");
	NGL_Font_DrawString(235, 307, 0xf79f, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Frequency");
	NGL_Font_DrawString(355, 307, 0xf79f, (NGL_Font*)&ms_shell_dlg_2_8_normal, Transparent, "Bits");


	/* Draw objects */
	NGL_GUI_DrawPageObjects();
}

/**
  * @brief  MainPage_Click
  *         Common click page objects
  * @param  None
  * @retval None
*/
static void MainPage_Click(Coordinate data, NGL_TouchType type)
{
    
}

/**
  * @brief  nglSeekBar_2_click
  *         Item/Items click event
  * @param  None
  * @retval None
*/
static void nglSeekBar_2_click(void)
{
    
}

/**
  * @brief  btnSourse_click
  *         Item/Items click event
  * @param  None
  * @retval None
*/
static void btnSourse_click(void)
{
    
}

/**
  * @brief  btnVisual_click
  *         Item/Items click event
  * @param  None
  * @retval None
*/
static void btnVisual_click(void)
{
    
}

/**
  * @brief  btnSettings_click
  *         Item/Items click event
  * @param  None
  * @retval None
*/
static void btnSettings_click(void)
{
    
}

/**
  * @brief  btnControls_click
  *         Item/Items click event
  * @param  None
  * @retval None
*/
static void btnControls_click(void)
{
    
}






/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
