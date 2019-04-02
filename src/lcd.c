
#include "lcd.h"
#include "spi.h"
#include "font.h"
#include "math.h"
#include "string.h"
#include "user.h"
#include "user.h"

/**
* @brief  写8bit命令/数据
* @param  type-命令和数据选择
		  dat-8bit数据
* @retval none.	
* @author Karl.	
*/
void Write(uint8_t type,uint8_t dat)
{
	uint8_t	t_buffer[1];
	CS_ENABLE;
	if(type == Command)
		WRTIE_COMMAND;
	else
		WRTIE_DAT;
//	Hal_Delay_us(1);	
	t_buffer[0] = dat;	
	HAL_SPI_Transmit(&hspi2,t_buffer,1,ERROR_TIME_OUT);
	CS_DISABLE;	
}
/**
* @brief  写16bit命令/数据
* @param  type-命令和数据选择
		  dat-16bit数据
* @retval none.	
* @author Karl.	
*/
void Write_U16(uint8_t type,uint16_t dat)
{
	uint8_t	t_buffer[2];
	CS_ENABLE;
	if(type == Command)
		WRTIE_COMMAND;
	else
		WRTIE_DAT;
//	Hal_Delay_us(1);
	t_buffer[0] = (dat&0xff00)>>8;
	t_buffer[1] = dat&0x00ff;	
	HAL_SPI_Transmit(&hspi2,t_buffer,2,ERROR_TIME_OUT);
	CS_DISABLE;	
}

/**
* @brief  写数据流
* @param  type-命令和数据选择
					dat-8bit数据流
					dat_len-数据流长度
* @retval none.	
* @author Karl.	
*/
void Write_Stream_Dat(uint8_t type,uint8_t dat[],uint16_t dat_len)
{
	CS_ENABLE;
	if(type == Command)
		WRTIE_COMMAND;
	else
		WRTIE_DAT;
	HAL_SPI_Transmit(&hspi2,dat,dat_len,ERROR_TIME_OUT);
	CS_DISABLE;	
}

/**
* @brief  设置行列位置
* @param  Xstart-行起始位置
		  Xend-行结束位置
		  Ystart-列起始位置
		  Yend-列结束位置
* @retval none.	
* @author Karl.	
*/
void Set_BlockWrite(uint16_t Xstart,uint16_t Xend,uint16_t Ystart,uint16_t Yend)
{	
	Write(Command,0x2A);             
	Write_U16(Parameter,Xstart);             
	Write_U16(Parameter,Xend);           
	
	
	Write(Command,0x2B);             
	Write_U16(Parameter,Ystart);             
	Write_U16(Parameter,Yend);  	
	
	Write(Command,0x2c);	
}
/**
* @brief  LCD屏幕初始化
* @param  none.	
* @retval none.
* @author Karl.	
*/
void LCD_Init(void)
{
	HAL_GPIO_WritePin(LCD_RESET_GPIO_Port, LCD_RESET_Pin, GPIO_PIN_SET);
	HAL_Delay(10);
	HAL_GPIO_WritePin(LCD_RESET_GPIO_Port, LCD_RESET_Pin, GPIO_PIN_RESET);
	HAL_Delay(20);	
	HAL_GPIO_WritePin(LCD_RESET_GPIO_Port, LCD_RESET_Pin, GPIO_PIN_SET);
	HAL_Delay(10);		

	Write(Command,0x11);     

	HAL_Delay(120); 
	Write(Command,0x36);     
	Write(Parameter,0x08);
	
	Write(Command,0x3A);     
	Write(Parameter,0x05);   

	Write(Command,0xB2);     
	Write(Parameter,0x0C);   
	Write(Parameter,0x0C);   
	Write(Parameter,0x00);   
	Write(Parameter,0x33);   
	Write(Parameter,0x33);   

	Write(Command,0xB7);     
	Write(Parameter,0x75);  


	Write(Command,0xBB);     
	Write(Parameter,0x3D);   //Vcom=1.625V

	Write(Command,0xC2);     
	Write(Parameter,0x01);   

	Write(Command,0xC3);     
	Write(Parameter,0x19);   //GVDD=4.8V 

	Write(Command,0xC4);     
	Write(Parameter,0x20);   //VDV, 0x20:0v

	Write(Command,0xC6);     
	Write(Parameter,0x0F);   //0x0F:60Hz        	

	Write(Command,0xD0);     
	Write(Parameter,0xA4);   
	Write(Parameter,0xA1);   

	Write(Command,0xD6);     
	Write(Parameter,0xA1);

	Write(Command,0xE0);     
	Write(Parameter,0x70);   
	Write(Parameter,0x04);   
	Write(Parameter,0x08);   
	Write(Parameter,0x09);   
	Write(Parameter,0x09);   
	Write(Parameter,0x05);   
	Write(Parameter,0x2A);   
	Write(Parameter,0x33);   
	Write(Parameter,0x41);   
	Write(Parameter,0x07);   
	Write(Parameter,0x13);   
	Write(Parameter,0x13);   
	Write(Parameter,0x29);   
	Write(Parameter,0x2F);   

	Write(Command,0xE1);     
	Write(Parameter,0x70);   
	Write(Parameter,0x03);   
	Write(Parameter,0x09);   
	Write(Parameter,0x0A);   
	Write(Parameter,0x09);   
	Write(Parameter,0x06);   
	Write(Parameter,0x2B);   
	Write(Parameter,0x34);   
	Write(Parameter,0x41);   
	Write(Parameter,0x07);   
	Write(Parameter,0x12);   
	Write(Parameter,0x14);   
	Write(Parameter,0x28);   
	Write(Parameter,0x2E);   

	Write(Command,0x20); 
	HAL_Delay(120);                

	Write(Command,0x29);   
}
/**
* @brief  全屏颜色填充
* @param  color颜色数据0~0xffff	
* @retval none.	
* @author Karl.	
*/
void Disp_Full_Color(uint16_t color)
{
	uint16_t i,j;
	uint8_t t_buffer[FRESH_BUFFER_LEN];
	
	for(i = 0; i < FRESH_BUFFER_LEN; i++)
	{
		t_buffer[i] = (color&0xff00)>>8;
		t_buffer[i+1] = color&0x00ff;
	}

	Set_BlockWrite(0,ROW-1,0,COL-1);
	
	CS_ENABLE;
	WRTIE_DAT;
	
	j = (COL * ROW) / FRESH_BUFFER_LEN * 2;
	
	for(i=0;i<j;i++)
	{
		HAL_SPI_Transmit(&hspi2,t_buffer,FRESH_BUFFER_LEN,ERROR_TIME_OUT);		
	}
	CS_DISABLE;	
}
/**
* @brief  获取ASCII字库索引号
* @param  ascii_dat数据
* @retval 索引号.	
* @author Karl.	
*/
uint16_t Get_ASCII_Index(uint8_t ascii_dat)
{
	uint16_t i;
	for(i = 0; i < 0xff; i++)
	{
		if(Ascii_Font[i][0] == ascii_dat)
		{
			return i;
		}
	}
			return 0xff;
}
/**
* @brief  显示ASCII数据
* @param  ascii_dat-显示数据
			Xstart-行起始位置
		  Ystart-列起始位置
		  TextColor-文本颜色
		  BackColor-背景色
* @retval none.	
* @author Karl.	
*/
void Disp_ASCII(uint8_t ascii_dat,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor)
{
	uint8_t num;
	uint8_t dat_value;
	uint16_t i;
	uint16_t j;
	uint16_t index;
	uint16_t index_num = 1;	
	uint8_t buffer[16];	
	
	//获取索引数据
	index = Get_ASCII_Index(ascii_dat);
//	printf(" index-%d  \r\n",index);	
	//设置行列
	Set_BlockWrite(Xstart,Xstart+(FONT_W-1),Ystart,Ystart+(FONT_H-1));
	//打点
	for(i=0;i<(FONT_W/8*FONT_H);i++)
	{
		dat_value = Ascii_Font[index][index_num++];
		num = 0;
		for(j=0;j<8;j++)
		{
			if((dat_value<<j)&0x80)
			{
				buffer[num] = (TextColor&0xff00)>>8;
				buffer[num+1] = TextColor&0x00ff;	
			}      
			else 
			{
				buffer[num] = (BackColor&0xff00)>>8;
				buffer[num+1] = BackColor&0x00ff;	
			}
			num += 2;							
		}
		Write_Stream_Dat(Parameter,buffer,16);
	}	
}

/**
* @brief  显示ASCII字符串
* @param  ascii_dat-ASCII字符串
		  ascii_dat_len-字符串长度
		  Xstart-行起始位置
		  Ystart-列起始位置
		  TextColor-文本颜色
		  BackColor-背景色
* @retval none.	
* @author Karl.	
*/
void Disp_ASCII_Str(uint8_t *ascii_dat,uint16_t ascii_dat_len,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor)
{
	uint16_t i;
	uint16_t limit_x;
	uint16_t limit_y;
	
	limit_x = Xstart;	
	limit_y = Ystart;
	for(i = 0;i < ascii_dat_len;i++)
	{
		if((limit_x+FONT_W) > ROW)//判断行是否越界
		{
			limit_x = 0;
			limit_y += FONT_H;
			if(limit_y > COL)
				limit_y = 0;
		}			
		Disp_ASCII(*ascii_dat,limit_x,limit_y,TextColor,BackColor);
		ascii_dat++;
		limit_x += FONT_W;
	}	
}

/**
* @brief  获取汉字库索引号
* @param  china_dat	; 汉字数据
* @retval 索引号.	
* @author Karl.	
*/
uint16_t Get_China_Index(uint8_t *china_dat)
{
	uint16_t i;
	for(i = 0; i < 0xff; i++)
	{
		if(China_Font_Index[i][0] == *china_dat)
		{
			china_dat++;
			if(*china_dat == '\0')//遇到结束符
				return 0xff;
			
			if(China_Font_Index[i][1] == *china_dat)//汉字相同
				return i;
			else
				china_dat--;
		}
	}
	return 0xff;
}

/**
* @brief  显示汉字
* @param  china_num-汉字索引标号
			Xstart-行起始位置
		  Ystart-列起始位置
		  TextColor-文本颜色
		  BackColor-背景色
* @retval none.	
* @author Karl.	
*/
void Disp_China(uint8_t *china_num,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor)
{
	uint8_t num;	
	uint8_t dat_value;		
	uint16_t i;
	uint16_t j;
	uint16_t index;
	uint16_t index_num = 1;
	uint8_t buffer[16];	

	//获取索引数据
	index = Get_China_Index(china_num);
//	printf(" index-%d  \r\n",index);
//	index = china_num;	
	if(index > CHINA_FONT_NUM)
		index = CHINA_FONT_NUM;
	//设置行列
	Set_BlockWrite(Xstart,Xstart+(CHINA_FONT_W-1),Ystart,Ystart+(CHINA_FONT_H-1));
	//打点
	for(i=0;i<(CHINA_FONT_W/8*CHINA_FONT_H);i++)
	{
		dat_value = China_Font[index][index_num++];
		num = 0;
		for(j=0;j<8;j++)
		{
			if((dat_value<<j)&0x80)
			{
				buffer[num] = (TextColor&0xff00)>>8;
				buffer[num+1] = TextColor&0x00ff;	
			}      
			else 
			{
				buffer[num] = (BackColor&0xff00)>>8;
				buffer[num+1] = BackColor&0x00ff;	
			}
			num += 2;							
		}
		Write_Stream_Dat(Parameter,buffer,16);		
	}		
}
/**
* @brief  显示汉字字符串
* @param  *china_num-汉字字符串
		  china_len-汉字长度
		  Xstart-行起始位置
		  Ystart-列起始位置
		  TextColor-文本颜色
		  BackColor-背景色
* @retval none.	
* @author Karl.	
*/
void Disp_China_Str(uint8_t *china_num,uint16_t china_len,uint16_t Xstart,uint16_t Ystart,uint16_t TextColor,uint16_t BackColor)
{
	uint16_t i;
	uint16_t limit_x;
	uint16_t limit_y;
	
	limit_x = Xstart;	
	limit_y = Ystart;
	for(i = 0;i < china_len;i++)
	{
		if((limit_x+CHINA_FONT_W) > ROW)//判断行是否越界
		{
			limit_x = 0;
			limit_y += CHINA_FONT_H;
			if(limit_y > COL)
				limit_y = 0;
		}			
		Disp_China(china_num,limit_x,limit_y,TextColor,BackColor);
		china_num += 2;
		limit_x += CHINA_FONT_W;

	}		
}

/**
* @brief  块颜色填充
* @param  color颜色数据0~0xffff	
* @retval none.	
* @author Karl.	
*/
void Disp_Block_Color(uint16_t x_star,uint16_t x_end, uint16_t y_star, uint16_t y_end, uint16_t color)
{
	uint16_t i,j;
//	uint32_t i,j;	
	uint8_t t_buffer[16];
		
	for(i = 0; i < 16; i+=2)
	{
		t_buffer[i] = (color&0xff00)>>8;
		t_buffer[i+1] = color&0x00ff;	
	}
	Set_BlockWrite(x_star, x_end-1, y_star, y_end-1);
	
	CS_ENABLE;
	WRTIE_DAT;
	
	j = (x_end - x_star) * (y_end - y_star);
  j = j / 8;
	for(i = 0; i < j; i++)
	{
		HAL_SPI_Transmit(&hspi2, t_buffer, 16,ERROR_TIME_OUT);		
	}
	CS_DISABLE;	
}
/**
* @brief  光标显示函数
* @param  x：光标X
					y：光标Y
					flag：1-显示，0-不显示
* @retval none.	
* @author Karl.	
*/
void Disp_Cursor(uint16_t x,uint16_t y,uint8_t flag,uint16_t TextColor,uint16_t BackColor)
{
	if(flag == 0)//显示光标
		Disp_ASCII('|', x, y, TextColor, BackColor);
	else	//不显示光标
		Disp_ASCII(' ', x, y, TextColor, BackColor);	
}
/**
* @brief  ASCII和汉字混合输出，只管当前行，不处理换行
* @param  *mix_dat:显示数据
					mix_len：显示数据长度
					x_star：起始坐标X
					y_star：起始坐标Y
					TextColor:显示颜色
					BackColor:背景颜色
* @retval none.	
* @author Karl.	
*/
void Disp_Mix_Str(uint8_t *mix_dat, uint16_t mix_len,uint16_t x_star,uint16_t y_star,uint16_t TextColor,uint16_t BackColor)
{
	uint8_t flag;		
	uint16_t i;
	uint16_t x;
	uint16_t y;
	
	x = x_star;
	y = y_star;
	for(i = 0; i < mix_len; i++)
	{
			flag  = Get_China_Index(mix_dat);
			if(flag != 0xff)//汉字
			{
					Disp_China(mix_dat, x, y, TextColor, BackColor);
					x += CHINA_FONT_W;
					mix_dat += 2;
					i++;
			}
			else
			{
					Disp_ASCII(*mix_dat, x, y, TextColor, BackColor);
					x += FONT_W;	
					mix_dat++;				
			}
	}						
}
