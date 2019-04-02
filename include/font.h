
#ifndef __FONT_H
#define __FONT_H
#ifdef __cplusplus
 extern "C" {
#endif

//------------------ASCII×Ö¿â-----------------------------------------------	 
//Ñ¡ÔñÏÔÊ¾µÄ×ÖÌå
#define CHAR_FONT_W16_H32	 
	 
#ifdef CHAR_FONT_W16_H32
	#define	FONT_W 16
	#define	FONT_H 32	 
	#define FONT_DAT_NUM 65
	extern const unsigned char Ascii_Font[][FONT_DAT_NUM];	 
#endif	 

//------------------ºº×Ö¿â-----------------------------------------------	 
#define CHINA_FONT_W32_H32
	
#ifdef CHINA_FONT_W32_H32
	#define	CHINA_FONT_W 32
	#define	CHINA_FONT_H 32	 
	#define CHINA_FONT_DAT_NUM 129
	#define CHINA_FONT_NUM	(5+1)		//0~141

	extern const unsigned char China_Font_Index[][2]; 
	extern const unsigned char China_Font[][CHINA_FONT_DAT_NUM];	 

#endif	 

#ifdef __cplusplus
}
#endif
#endif /*__ __FONT_H */

/**
  * @}
  */

/**
  * @}
  */

