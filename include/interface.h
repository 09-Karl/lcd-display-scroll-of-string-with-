/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __INTERFACE_H
#define __INTERFACE_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
	 
#define DISPLAY_COLOR	0xffff		//��ʾ��ɫ	 	 	 
#define BACKGROUD_COLOR	0				//������ɫ	

#define HORIZONTAL_SCROLL_AREA_X_STAR	(FONT_W*5)					//������X��ʼλ�� 	 
#define HORIZONTAL_SCROLL_AREA_X_END	(FONT_W*20)					//������X����λ��  	 
#define HORIZONTAL_SCROLL_AREA_Y_STAR	(COL-CHINA_FONT_H)				//������Y��ʼλ�� 		 
#define HORIZONTAL_SCROLL_AREA_Y_END	(COL)						//������Y����λ��  	 
#define HORIZONTAL_SCROLL_DISP_MAX_LEN	(10)						//�������ַ��������ʾ���� 	
#define HORIZONTAL_SCROLL_SAVE_BUFFER_LEN	(20)		//�������ַ�����󱣴泤�� 	 
#define HORIZONTAL_SCROLL_AREA_MAX_TIME	(60000)				//��������ʾʱ�� 	 	 	 
		 
typedef struct
{
	uint8_t warn_flag;		//��ʾ��־	
	uint8_t scroll_flag;		//������־
	uint8_t get_bit_flag;		//��ȡ��ʾλ��־
	uint16_t count_bit;			//��ʾλ����
	uint16_t max_bit;				//��ʾ���λ��-����������
	uint16_t scroll_time;		//����ʱ��
	uint16_t time_count;		//����ʱ��	
//	uint16_t fresh_time;		//����ʱ��	
	uint8_t disp_buffer[HORIZONTAL_SCROLL_SAVE_BUFFER_LEN+1];	//��ʾ�ַ���
	uint8_t change_buffer[HORIZONTAL_SCROLL_SAVE_BUFFER_LEN+1];	//��ʾ�ַ���	
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
