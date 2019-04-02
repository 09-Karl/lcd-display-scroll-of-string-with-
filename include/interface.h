/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __INTERFACE_H
#define __INTERFACE_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
	 
#define DISPLAY_COLOR	0xffff		//显示颜色	 	 	 
#define BACKGROUD_COLOR	0				//背景颜色	

#define HORIZONTAL_SCROLL_AREA_X_STAR	(FONT_W*5)					//滚动区X起始位置 	 
#define HORIZONTAL_SCROLL_AREA_X_END	(FONT_W*20)					//滚动区X结束位置  	 
#define HORIZONTAL_SCROLL_AREA_Y_STAR	(COL-CHINA_FONT_H)				//滚动区Y起始位置 		 
#define HORIZONTAL_SCROLL_AREA_Y_END	(COL)						//滚动区Y结束位置  	 
#define HORIZONTAL_SCROLL_DISP_MAX_LEN	(10)						//滚动区字符串最大显示长度 	
#define HORIZONTAL_SCROLL_SAVE_BUFFER_LEN	(20)		//滚动区字符串最大保存长度 	 
#define HORIZONTAL_SCROLL_AREA_MAX_TIME	(60000)				//滚动区显示时间 	 	 	 
		 
typedef struct
{
	uint8_t warn_flag;		//警示标志	
	uint8_t scroll_flag;		//滚动标志
	uint8_t get_bit_flag;		//获取显示位标志
	uint16_t count_bit;			//显示位计数
	uint16_t max_bit;				//显示最大位数-根据字体宽度
	uint16_t scroll_time;		//滚动时间
	uint16_t time_count;		//滚动时间	
//	uint16_t fresh_time;		//滚动时间	
	uint8_t disp_buffer[HORIZONTAL_SCROLL_SAVE_BUFFER_LEN+1];	//显示字符串
	uint8_t change_buffer[HORIZONTAL_SCROLL_SAVE_BUFFER_LEN+1];	//显示字符串	
}INTERFACE_SCROLL_HandleTypeDef;


extern INTERFACE_SCROLL_HandleTypeDef Horizontal_Left_Scroll;
extern uint8_t Black_Light_Power_Index[3];
extern void Horizontal_Change_Mix_Str_Dat(uint8_t left_flag,uint8_t *mix_dat, uint8_t *save_dat,uint16_t mix_len);
extern void Horizontal_Scroll_Mix_Str(
	uint8_t *mix_dat, uint16_t mix_len,
	uint16_t Horizontal_num,	
	uint16_t x_star, uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor);
extern void Right_Shift_Disp_Part_Ascii(
	uint8_t dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor);
extern void Right_Shift_Disp_Part_China(
	uint8_t *dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor);
extern void Left_Shift_Disp_Part_Ascii(
	uint8_t dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor);
extern void Left_Shift_Disp_Part_China(
	uint8_t *dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor);
#ifdef __cplusplus
}
#endif
#endif /*__INTERFACE_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
