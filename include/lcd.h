/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LCD_H
#define __LCD_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "main.h"
#include "font.h"
	
//#define LCD_1_3_INCH	
#define LCD_2_0_INCH	
	
#define RED    0xF800		
#define GREEN  0x07E0
#define BLUE   0x001F
#define WHITE  0xFFFF
#define BLACK  0x0000
#define GRAY   0xEF5D	   
#define GRAY75 0x39E7 
#define GRAY50 0x7BEF	
#define GRAY25 0xADB5	
#define LCD_TEST_COLOR	RED		 

#define ROW  320		  //行
#define COL  240			//列
	 
#define	Command 	1 	//命令
#define	Parameter 2     //数据
	 
#define	ERROR_TIME_OUT 0x1000   //传输数据超时时间
#define	FRESH_BUFFER_LEN (768)   //刷屏缓存

#define	CS_ENABLE   HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_RESET) 
#define	CS_DISABLE   HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_SET) 

#define	RESET_ENABLE   HAL_GPIO_WritePin(LCD_RESET_GPIO_Port, LCD_RESET_Pin, GPIO_PIN_RESET) 
#define	RESET_DISABLE   HAL_GPIO_WritePin(LCD_RESET_GPIO_Port, LCD_RESET_Pin, GPIO_PIN_SET) 

#define	WRTIE_COMMAND		HAL_GPIO_WritePin(LCD_WR_GPIO_Port, LCD_WR_Pin, GPIO_PIN_RESET)
#define	WRTIE_DAT		HAL_GPIO_WritePin(LCD_WR_GPIO_Port, LCD_WR_Pin, GPIO_PIN_SET)

typedef enum
{
  ENABLE_LCD_CURSOR = 0,
  DISABLE_LCD_CURSOR
}CURSOR_State;

extern void Write(uint8_t type,uint8_t dat);
extern void Write_U16(uint8_t type,uint16_t dat);
extern void Set_BlockWrite(uint16_t Xstart,uint16_t Xend,uint16_t Ystart,uint16_t Yend);
extern void LCD_Init(void);
extern void Disp_Full_Color(uint16_t color);

extern uint16_t Get_ASCII_Index(uint8_t ascii_dat);
extern void Disp_ASCII(uint8_t ascii_dat,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor);
extern void Disp_ASCII_Str(uint8_t *ascii_dat,uint16_t ascii_dat_len,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor);

extern uint16_t Get_China_Index(uint8_t *china_dat);
extern void Disp_China(uint8_t *china_dat,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor);
extern void Disp_China_Str(uint8_t *china_num,uint16_t china_len,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor);

extern void Disp_Block_Color(uint16_t x_star,uint16_t x_end, uint16_t y_star, uint16_t y_end, uint16_t color);
extern void Disp_Cursor(uint16_t x,uint16_t y,uint8_t flag,uint16_t TextColor,uint16_t BackColor);
extern void Disp_Mix_Str(uint8_t *mix_dat, uint16_t mix_len,uint16_t x_star,uint16_t y_star,uint16_t TextColor,uint16_t BackColor);
extern void Write_Stream_Dat(uint8_t type,uint8_t dat[],uint16_t dat_len);

#ifdef __cplusplus
}
#endif
#endif /*__LCD_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
