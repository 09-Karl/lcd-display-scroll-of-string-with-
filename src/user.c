
#include "user.h"
#include "string.h"
#include "usart.h"
#include "tim.h"

/**
* @brief  ������������1λ
* @param  *str : ����.
* @param  len : ���ݳ���.
* @retval none.
* @author Karl.	
*/
void left_shift(unsigned char *str, int len)
{
    int i;
     
    for(i = 1; i <= len; i++)
    {
         str[i-1] = str[i-1] << 1;
         
         if(i < len && str[i] & MSB)
         {
             str[i-1] = str[i-1] | LSB;    
         }    
    }	
}

/**
* @brief  ������������1λ
* @param  *str : ����.
* @param  len : ���ݳ���.
* @retval none.
* @author Karl.	
*/
void right_shift(unsigned char *str, int len)
{
	int i;
	unsigned char value;
	unsigned char lsb_flag = 0;

	for(i = 0; i <= len; i++)
	{
	 value = str[i]>>1;

	 if(lsb_flag == LSB)
	 {
		value += MSB;
	 }
	 lsb_flag = str[i]&LSB;

	 str[i] = value;
	}
}


/**
* @brief  ����PWM���ռ�ձ�
* @param  htim-ת����ʱ
* @param  Channel �� ���ͨ��
* @param  value �� ռ�ձ�����
* @retval none.	
* @author Karl.	
*/
void PWEM_SET_Duty(TIM_HandleTypeDef *htim, uint32_t Channel, uint8_t duty)
{
	uint32_t value;
	TIM_OC_InitTypeDef sconfigOC;
	
	value = htim->Init.Period*duty/100;
//	printf("value-%d\r\n",value);
	HAL_TIMEx_PWMN_Stop(htim,Channel);
	sconfigOC.OCMode = TIM_OCMODE_PWM1;
	sconfigOC.Pulse = value;
	sconfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	sconfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	HAL_TIM_PWM_ConfigChannel(htim, &sconfigOC, Channel);
//	while(HAL_TIM_PWM_ConfigChannel(&htim1, &sconfigOC, TIM_CHANNEL_4) != HAL_OK);	
	HAL_TIM_PWM_Start(htim,Channel);
}
