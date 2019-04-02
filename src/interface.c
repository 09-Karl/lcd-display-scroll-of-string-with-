
#include "user.h"
#include "interface.h"
#include "lcd.h"
#include "font.h" 
#include "string.h"
#include "spi.h"



INTERFACE_SCROLL_HandleTypeDef Horizontal_Left_Scroll;
//背光灯电量索引
uint8_t Black_Light_Power_Index[3] = {90,15,50};

/**
* @brief  字符串数据水平移动
* @param  left_flag : 移动方向 0-右移 1-左移
					*mix_dat : 原始字符串
					*save_dat：字符串移动后数据
					mix_len  ：字符串长度
* @retval none.
* @author Karl.	
*/
void Horizontal_Change_Mix_Str_Dat(uint8_t left_flag,uint8_t *mix_dat, uint8_t *save_dat,uint16_t mix_len)
{

	uint8_t index;	
	uint16_t i;
//	uint16_t j;
	
	if(left_flag == 0)//右移
	{
		index  = Get_China_Index(mix_dat+mix_len-2);		
		if(index == 0xff)//ASCII数据
		{
			*save_dat = *(mix_dat+mix_len-1);
			save_dat++;
			for(i = 0; i < mix_len - 1; i++)
			{
				*save_dat = *mix_dat;	
				save_dat++;
				mix_dat++;			
			}		
		}
		else//汉字
		{
			*save_dat = *(mix_dat+mix_len-2);	
			save_dat++;
			*save_dat = *(mix_dat+mix_len-1);		
			save_dat++;
			for(i = 0; i < mix_len - 2; i++)
			{
				*save_dat = *mix_dat;	
				save_dat++;
				mix_dat++;			
			}
		}		
	}
	else//左移
	{
		index  = Get_China_Index(mix_dat);				
		if(index == 0xff)//ASCII数据
		{
			*(save_dat+mix_len-1) = *mix_dat;				
			for(i = 0; i < mix_len - 1; i++)
			{
				*save_dat = *(mix_dat+1);	
				save_dat++;
				mix_dat++;			
			}		
		}
		else//汉字
		{
			*(save_dat+mix_len-2) = *(mix_dat);
			*(save_dat+mix_len-1) = *(mix_dat+1);				
			for(i = 0; i < mix_len - 2; i++)
			{
				*save_dat = *(mix_dat+2);	
				save_dat++;
				mix_dat++;			
			}
		}		
	}
}


/**
* @brief  ASCII字符向右水平滚动
* @param  dat:显示数据
					Horizontal_num：滚动位置
					x_star：起始坐标X
					y_star：起始坐标Y
					TextColor:显示颜色
					BackColor:背景颜色
* @retval none.
* @author Karl.	
*/
void Right_Shift_Disp_Part_Ascii(
	uint8_t dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor)
{
	uint8_t num;	
	uint16_t i;
	uint16_t j;	
	uint16_t index_num;	
	uint16_t index;			
	uint16_t buffer_num;		
	uint16_t buffer_count;
	uint16_t pix_num;			
	uint16_t pix_count;		
	uint16_t disp_count;		
	uint8_t pix[3];		
	uint8_t buffer[FONT_W/8];
	
	index = Get_ASCII_Index(dat);	
	pix_count = 0;
	buffer_num = FONT_W/8;
	
	//设置行列
	if(Horizontal_num == 0)
	{
		Set_BlockWrite(x_star, x_star+FONT_W-1, y_star, y_star+FONT_H-1);
		pix_num = FONT_W*FONT_H;
	}
	else	
	{
		Set_BlockWrite(x_star, x_star+Horizontal_num-1, y_star, y_star+FONT_H-1);
		pix_num = Horizontal_num*FONT_H;		
	}
	
	buffer_count = 0;
	index_num = 1;
	for(i = 0; i < FONT_W/8*FONT_H; i++)
	{
		buffer[buffer_count] = Ascii_Font[index][index_num];
		index_num++;
		buffer_count++;
		if(pix_count >= pix_num)//像素点已经打完
			break;
		
		if(buffer_count >= buffer_num)//获取当前行所有像素数据
		{			
			num = 0;		
			if(Horizontal_num == 0)
				disp_count = FONT_W;			
			else
				disp_count = Horizontal_num;			
			for(buffer_count = 0; buffer_count < buffer_num; buffer_count++)
			{
				if(num >= disp_count)//打完列数据,换行
					break;
				
				//数据打点					
				for(j = 0; j < 8; j++)
				{
					if((buffer[buffer_count]<<j)&0x80)
					{
						pix[0] = (TextColor&0xff00)>>8;
						pix[1] = TextColor&0x00ff;	
					}      
					else 
					{
						pix[0] = (BackColor&0xff00)>>8;
						pix[1] = BackColor&0x00ff;	
					}
					Write_Stream_Dat(Parameter,pix,2);		
					pix_count++;
					
					num++;
					
					if(num >= disp_count)//打完列数据,换行
						break;
				}
			}	
			buffer_count = 0;
		}
	}
//	printf("pix_count-%d\r\n",pix_count);	
}

/**
* @brief  汉字字符向右水平滚动
* @param  dat:显示数据
					Horizontal_num：滚动位置
					x_star：起始坐标X
					y_star：起始坐标Y
					TextColor:显示颜色
					BackColor:背景颜色
* @retval none.	
* @author Karl.	
*/
void Right_Shift_Disp_Part_China(
	uint8_t *dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor)
{
	uint8_t num;	
	uint16_t i;
	uint16_t j;	
	uint16_t index_num;	
	uint16_t index;			
	uint16_t buffer_num;		
	uint16_t buffer_count;
	uint16_t pix_num;			
	uint16_t pix_count;		
	uint16_t disp_count;		
	uint8_t pix[3];		
	uint8_t buffer[CHINA_FONT_W/8];
	
	index = Get_China_Index(dat);
	pix_count = 0;
	buffer_num = CHINA_FONT_W/8;
	
	//设置行列
	if(Horizontal_num == 0)
	{
		Set_BlockWrite(x_star, x_star+CHINA_FONT_W-1, y_star, y_star+CHINA_FONT_H-1);
		pix_num = CHINA_FONT_W*CHINA_FONT_H;
	}
	else	
	{
		Set_BlockWrite(x_star, x_star+Horizontal_num-1, y_star, y_star+CHINA_FONT_H-1);
		pix_num = Horizontal_num*CHINA_FONT_H;		
	}
	
	buffer_count = 0;
	index_num = 1;
	for(i = 0; i < CHINA_FONT_W/8*CHINA_FONT_H; i++)
	{
		buffer[buffer_count] = China_Font[index][index_num];
		index_num++;
		buffer_count++;
		if(pix_count >= pix_num)//像素点已经打完
			break;
		
		if(buffer_count >= buffer_num)//获取当前行所有像素数据
		{			
			num = 0;		
			if(Horizontal_num == 0)
				disp_count = CHINA_FONT_W;			
			else
				disp_count = Horizontal_num;			
			for(buffer_count = 0; buffer_count < buffer_num; buffer_count++)
			{
				if(num >= disp_count)//打完列数据,换行
					break;
				
				//数据打点					
				for(j = 0; j < 8; j++)
				{
					if((buffer[buffer_count]<<j)&0x80)
					{
						pix[0] = (TextColor&0xff00)>>8;
						pix[1] = TextColor&0x00ff;	
					}      
					else 
					{
						pix[0] = (BackColor&0xff00)>>8;
						pix[1] = BackColor&0x00ff;	
					}
					Write_Stream_Dat(Parameter,pix,2);		
					pix_count++;
					
					num++;
					
					if(num >= disp_count)//打完列数据,换行
						break;
				}
			}	
			buffer_count = 0;
		}
	}
//	printf("pix_count-%d\r\n",pix_count);	
}

/**
* @brief  ASCII字符向左水平滚动
* @param  dat:显示数据
					Horizontal_num：滚动位置
					x_star：起始坐标X
					y_star：起始坐标Y
					TextColor:显示颜色
					BackColor:背景颜色
* @retval none.	
* @author Karl.	
*/
void Left_Shift_Disp_Part_Ascii(
	uint8_t dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor)
{
	uint8_t num;	
	uint16_t i;
	uint16_t j;	
	uint16_t index_num;	
	uint16_t index;			
	uint16_t buffer_num;		
	uint16_t buffer_count;
	uint16_t pix_num;			
	uint16_t pix_count;		
	uint8_t pix[3];		
	uint8_t buffer[FONT_W/8];
	
	index = Get_ASCII_Index(dat);	
	pix_count = 0;
	buffer_num = FONT_W/8;
	
	//设置行列
	Set_BlockWrite(x_star, x_star+FONT_W-Horizontal_num-1, y_star, y_star+(FONT_H-1));
	pix_num = (FONT_W-Horizontal_num)*FONT_H;		
//	printf("s_x-%d  e_x-%d\r\n",x_star, x_star+FONT_W-Horizontal_num);
//	printf("bit-%d  pix_num-%d\r\n",Horizontal_num, pix_num);
	
	buffer_count = 0;
	index_num = 1;
	for(i = 0; i < FONT_W/8*FONT_H; i++)
	{
		buffer[buffer_count] = Ascii_Font[index][index_num];
		index_num++;
		buffer_count++;
		if(pix_count >= pix_num)//像素点已经打完
			break;
		
//		printf(" i-%d ",i);								
		if(buffer_count >= buffer_num)//获取当前行所有像素数据
		{			
			num = 0;		
			for(buffer_count = 0; buffer_count < buffer_num; buffer_count++)
			{				
				//数据打点					
				for(j = 0; j < 8; j++)
				{					
					if((buffer[buffer_count]<<j)&0x80)
					{
						pix[0] = (TextColor&0xff00)>>8;
						pix[1] = TextColor&0x00ff;	
					}      
					else 
					{
						pix[0] = (BackColor&0xff00)>>8;
						pix[1] = BackColor&0x00ff;	
					}
					
					if(num >= Horizontal_num)
					{
//						printf(" j-%d ",j);						
						Write_Stream_Dat(Parameter,pix,2);
						pix_count++;						
					}						
					num++;
				}
			}	
			buffer_count = 0;
		}
	}	
//	printf("pix_count-%d\r\n",pix_count);
}

/**
* @brief  汉字字符向左水平滚动
* @param  dat:显示数据
					Horizontal_num：滚动位置
					x_star：起始坐标X
					y_star：起始坐标Y
					TextColor:显示颜色
					BackColor:背景颜色
* @retval none.	
* @author Karl.	
*/
void Left_Shift_Disp_Part_China(
	uint8_t *dat,
	uint16_t Horizontal_num,	
	uint16_t x_star,
	uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor)
{
	uint8_t num;	
	uint16_t i;
	uint16_t j;	
	uint16_t index_num;	
	uint16_t index;			
	uint16_t buffer_num;		
	uint16_t buffer_count;
	uint16_t pix_num;			
	uint16_t pix_count;		
	uint8_t pix[3];		
	uint8_t buffer[FONT_W/8];

	index = Get_China_Index(dat);
	pix_count = 0;
	buffer_num = CHINA_FONT_W/8;
	
	//设置行列
	Set_BlockWrite(x_star, x_star+CHINA_FONT_W-Horizontal_num-1, y_star, y_star+(CHINA_FONT_H-1));
	pix_num = (CHINA_FONT_W-Horizontal_num)*CHINA_FONT_H;		
//	printf("s_x-%d  e_x-%d\r\n",x_star, x_star+FONT_W-Horizontal_num);
//	printf("bit-%d  pix_num-%d\r\n",Horizontal_num, pix_num);
	
	buffer_count = 0;
	index_num = 1;
	for(i = 0; i < CHINA_FONT_W/8*CHINA_FONT_H; i++)
	{
		buffer[buffer_count] = China_Font[index][index_num];
		index_num++;
		buffer_count++;
		if(pix_count >= pix_num)//像素点已经打完
			break;
		
//		printf(" i-%d ",i);								
		if(buffer_count >= buffer_num)//获取当前行所有像素数据
		{			
			num = 0;		
			for(buffer_count = 0; buffer_count < buffer_num; buffer_count++)
			{				
				//数据打点					
				for(j = 0; j < 8; j++)
				{					
					if((buffer[buffer_count]<<j)&0x80)
					{
						pix[0] = (TextColor&0xff00)>>8;
						pix[1] = TextColor&0x00ff;	
					}      
					else 
					{
						pix[0] = (BackColor&0xff00)>>8;
						pix[1] = BackColor&0x00ff;	
					}
					
					if(num >= Horizontal_num)
					{
//						printf(" j-%d ",j);						
						Write_Stream_Dat(Parameter,pix,2);
						pix_count++;						
					}						
					num++;					
				}
			}	
			buffer_count = 0;
		}
	}	
//	printf("pix_count-%d\r\n",pix_count);	
}

/**
* @brief  字符串水平滚动(向左)
* @param  *mix_dat:显示数据
					mix_len：显示数据长度
					Horizontal_num：滚动位置
					x_star：起始坐标X
					y_star：起始坐标Y
					TextColor:显示颜色
					BackColor:背景颜色
* @retval none.
* @author Karl.	
*/
void Horizontal_Scroll_Mix_Str(
	uint8_t *mix_dat, uint16_t mix_len,
	uint16_t Horizontal_num,	
	uint16_t x_star, uint16_t y_star,
	uint16_t TextColor,uint16_t BackColor)
{
	uint16_t i;
	uint16_t x;
	uint16_t index;		
	uint16_t bit_count = 0;	
	uint16_t bit_num = 0;						
	uint8_t *temp_buffer;

	bit_num = mix_len*FONT_W;
	x = x_star;
	temp_buffer = mix_dat;			
	for(i = 0; i < mix_len; i++)
	{
		index = Get_China_Index(temp_buffer);	
		if(index == 0xff)//ASCII字符
		{
//			printf("Ascii i-%d bit_num-%d bit_count-%d\r\n",i,bit_num,bit_count);
			if(i == 0)//第一个字
			{
				Left_Shift_Disp_Part_Ascii(*temp_buffer, Horizontal_num, x, y_star, TextColor, BackColor);
				x += FONT_W-Horizontal_num;	
				bit_count += FONT_W-Horizontal_num;								
			}				
			else if((bit_count + FONT_W) > bit_num)
			{
				Right_Shift_Disp_Part_Ascii(*temp_buffer, bit_num-bit_count, x, y_star, TextColor, BackColor);	
				break;
			}							
			else
			{
					Disp_ASCII(*temp_buffer, x, y_star, TextColor, BackColor);
					x += FONT_W;	
					bit_count += FONT_W;	
			}	
			temp_buffer++;			
		}
		else//汉字
		{
//			printf("China i-%d bit_num-%d bit_count-%d\r\n",i,bit_num,bit_count);
			if(i == 0)//第一个字
			{
				Left_Shift_Disp_Part_China(temp_buffer, Horizontal_num, x, y_star, TextColor, BackColor);
				x += CHINA_FONT_W-Horizontal_num;
				bit_count += CHINA_FONT_W-Horizontal_num;				
			}
			else if((bit_count + CHINA_FONT_W) > bit_num)
			{
				Right_Shift_Disp_Part_China(temp_buffer, bit_num-bit_count, x, y_star, TextColor, BackColor);
				break;				
			}				
			else
			{
				Disp_China(temp_buffer, x, y_star, TextColor, BackColor);
				x += CHINA_FONT_W;
				bit_count += CHINA_FONT_W;
			}	
			i++;			
			temp_buffer += 2;			
		}
	}
}


