/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32l4xx_hal.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* USER CODE BEGIN Includes */
#include "lcd.h"
#include "user.h"
#include "interface.h"
#include "string.h"

/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
//uint8_t power_flag = 0;
//uint8_t Key_Value = 0;
uint16_t i = 0;
//uint8_t j = 0;
//uint8_t count = 0;
uint16_t count_num = 0;
uint8_t pwn_duty = 0;
//uint8_t temp_flag = 0;
//uint8_t *str_buffer;
//uint8_t I2C_Buffer[50];
//uint8_t Disp_Buffer1[51] = "时间123456789abcdef";
//uint8_t Disp_Buffer2[51];
//Time_Def sysTime;
//uint8_t Main_Time_Flag = 0;	
//uint8_t Main_Time_Count = 0;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_SPI2_Init();
  MX_TIM1_Init();

  /* USER CODE BEGIN 2 */
	
	LCD_Init();
	Disp_Full_Color(BLACK);	
	printf("\r\n  ******Re start******  \r\n");	
	printf("SPI-%02x  \r\n",HAL_SPI_GetState(&hspi2));
	
	HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_4);
	PWEM_SET_Duty(&htim1,TIM_CHANNEL_4,Black_Light_Power_Index[0]);	
	HAL_Delay(100);			
				
	Horizontal_Left_Scroll.scroll_flag = 1;
	Horizontal_Left_Scroll.scroll_time = 0;
	Horizontal_Left_Scroll.time_count = 0;
	Horizontal_Left_Scroll.count_bit = 0;
	Horizontal_Left_Scroll.get_bit_flag = 0;
	memset(&Horizontal_Left_Scroll.disp_buffer, 0, sizeof(Horizontal_Left_Scroll.disp_buffer));
//	strcat((char *)Horizontal_Left_Scroll.disp_buffer,"1234567890ABCDEF1234");
	strcat((char *)Horizontal_Left_Scroll.disp_buffer,"12年56月9日时分秒7年");
//	strcat((char *)Horizontal_Left_Scroll.disp_buffer,"年56月9日时分秒7年12");
//	strcat((char *)Horizontal_Left_Scroll.disp_buffer,"年月日时分秒月时日秒");
			Disp_ASCII_Str("1234567890", 10, 
			HORIZONTAL_SCROLL_AREA_X_STAR,HORIZONTAL_SCROLL_AREA_Y_STAR-FONT_H,
				DISPLAY_COLOR, BACKGROUD_COLOR);				
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */
		if(Horizontal_Left_Scroll.scroll_flag == 1)//滚动显示数据				
		{
			if(Horizontal_Left_Scroll.get_bit_flag == 0)//获取最大移动位数
			{
				if(0xff == Get_China_Index(Horizontal_Left_Scroll.disp_buffer))//取汉字索引，ASCII索引会导致部分汉字出错	
					Horizontal_Left_Scroll.max_bit = FONT_W;
				else
					Horizontal_Left_Scroll.max_bit = CHINA_FONT_W;						
				Horizontal_Left_Scroll.count_bit = 0;
				Horizontal_Left_Scroll.get_bit_flag = 1;
//				Horizontal_Left_Scroll.count_bit = 1;				
			}
			//显示
//			Disp_ASCII(' ', HORIZONTAL_SCROLL_AREA_X_STAR,HORIZONTAL_SCROLL_AREA_Y_STAR,
//				DISPLAY_COLOR, BACKGROUD_COLOR);
//			Right_Shift_Disp_Part_Ascii('0',
//				Horizontal_Left_Scroll.count_bit,
//				HORIZONTAL_SCROLL_AREA_X_STAR,HORIZONTAL_SCROLL_AREA_Y_STAR,
//				DISPLAY_COLOR, BACKGROUD_COLOR);
//			Left_Shift_Disp_Part_Ascii('0',
//				Horizontal_Left_Scroll.count_bit,
//				HORIZONTAL_SCROLL_AREA_X_STAR,HORIZONTAL_SCROLL_AREA_Y_STAR,
//				DISPLAY_COLOR, BACKGROUD_COLOR);
			
//			Disp_ASCII_Str("  ", 2, HORIZONTAL_SCROLL_AREA_X_STAR,HORIZONTAL_SCROLL_AREA_Y_STAR,
//				DISPLAY_COLOR, BACKGROUD_COLOR);			
//			Right_Shift_Disp_Part_China("年",
//				Horizontal_Left_Scroll.count_bit,
//				HORIZONTAL_SCROLL_AREA_X_STAR,HORIZONTAL_SCROLL_AREA_Y_STAR,
//				DISPLAY_COLOR, BACKGROUD_COLOR);
//			Left_Shift_Disp_Part_China("年",
//				Horizontal_Left_Scroll.count_bit,
//				HORIZONTAL_SCROLL_AREA_X_STAR,HORIZONTAL_SCROLL_AREA_Y_STAR,
//				DISPLAY_COLOR, BACKGROUD_COLOR);
//			Horizontal_Left_Scroll.count_bit = 8;
			Horizontal_Scroll_Mix_Str(
				Horizontal_Left_Scroll.disp_buffer, HORIZONTAL_SCROLL_DISP_MAX_LEN,
				Horizontal_Left_Scroll.count_bit,	
				HORIZONTAL_SCROLL_AREA_X_STAR, HORIZONTAL_SCROLL_AREA_Y_STAR, 
				DISPLAY_COLOR, BACKGROUD_COLOR);
//			printf("max_bit-%d\r\n",Horizontal_Left_Scroll.max_bit);			
//			printf("count_bit-%d\r\n",Horizontal_Left_Scroll.count_bit);
//			HAL_Delay(100);
//			while (1);
			Horizontal_Left_Scroll.count_bit++;
			//调转数据
			if(Horizontal_Left_Scroll.count_bit >= Horizontal_Left_Scroll.max_bit)
			{
				Horizontal_Left_Scroll.count_bit = 0;
				Horizontal_Left_Scroll.max_bit = 0;
				Horizontal_Left_Scroll.get_bit_flag = 0;						
				//数据移位
				Horizontal_Change_Mix_Str_Dat(1, Horizontal_Left_Scroll.disp_buffer, 
				Horizontal_Left_Scroll.change_buffer, 
				strlen((char *)Horizontal_Left_Scroll.disp_buffer));
				//将移位后数据存入						
				memcpy(Horizontal_Left_Scroll.disp_buffer,
				Horizontal_Left_Scroll.change_buffer,strlen((char *)Horizontal_Left_Scroll.disp_buffer));
			} 				
		}								
  }
  /* USER CODE END 3 */

}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_PeriphCLKInitTypeDef PeriphClkInit;

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = 0;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_6;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_MSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 40;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART2;
  PeriphClkInit.Usart2ClockSelection = RCC_USART2CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the main internal regulator output voltage 
    */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* USER CODE BEGIN 4 */

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)
{
		printf("\r\n uart_status  %x\r\n",HAL_UART_GetState(&huart2));	
		printf("\r\n uart_error  %x\r\n",HAL_UART_GetError(&huart2));		
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void _Error_Handler(char * file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
		printf("系统故障\r\n");
		HAL_Delay(1000);
  }
  /* USER CODE END Error_Handler_Debug */ 
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
