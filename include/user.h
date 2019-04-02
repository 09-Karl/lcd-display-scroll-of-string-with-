/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USER_H
#define __USER_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
	  
#define MSB        0x80
#define LSB        0x01	 
	
extern void left_shift(unsigned char *str, int len);
extern void right_shift(unsigned char *str, int len);

extern void PWEM_SET_Duty(TIM_HandleTypeDef *htim, uint32_t Channel, uint8_t duty);

#ifdef __cplusplus
}
#endif
#endif /*__USER_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
