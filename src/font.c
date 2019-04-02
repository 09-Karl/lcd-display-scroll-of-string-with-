
#include "font.h" 

#ifdef CHAR_FONT_W16_H32

const unsigned char Ascii_Font[][FONT_DAT_NUM] = 
{
/*--  文字:  0  --*/  
'0',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x06,0x20,
0x0C,0x30,0x18,0x18,0x18,0x18,0x18,0x08,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,
0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x18,0x08,0x18,0x18,
0x18,0x18,0x0C,0x30,0x06,0x20,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  1  --*/
'1',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x80,
0x1F,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x03,0xC0,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  2  --*/
'2',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x08,0x38,
0x10,0x18,0x20,0x0C,0x20,0x0C,0x30,0x0C,0x30,0x0C,0x00,0x0C,0x00,0x18,0x00,0x18,
0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00,0x02,0x00,0x04,0x04,0x08,0x04,
0x10,0x04,0x20,0x0C,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*-- 文字:  3  --*/
'3',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x18,0x60,
0x30,0x30,0x30,0x18,0x30,0x18,0x30,0x18,0x00,0x18,0x00,0x18,0x00,0x30,0x00,0x60,
0x03,0xC0,0x00,0x70,0x00,0x18,0x00,0x08,0x00,0x0C,0x00,0x0C,0x30,0x0C,0x30,0x0C,
0x30,0x08,0x30,0x18,0x18,0x30,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  4  --*/
'4',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x60,
0x00,0xE0,0x00,0xE0,0x01,0x60,0x01,0x60,0x02,0x60,0x04,0x60,0x04,0x60,0x08,0x60,
0x08,0x60,0x10,0x60,0x30,0x60,0x20,0x60,0x40,0x60,0x7F,0xFC,0x00,0x60,0x00,0x60,
0x00,0x60,0x00,0x60,0x00,0x60,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  5  --*/
'5',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFC,0x0F,0xFC,
0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x13,0xE0,0x14,0x30,
0x18,0x18,0x10,0x08,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x30,0x0C,0x30,0x0C,
0x20,0x18,0x20,0x18,0x18,0x30,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  6  --*/
'6',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xE0,0x06,0x18,
0x0C,0x18,0x08,0x18,0x18,0x00,0x10,0x00,0x10,0x00,0x30,0x00,0x33,0xE0,0x36,0x30,
0x38,0x18,0x38,0x08,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x18,0x0C,
0x18,0x08,0x0C,0x18,0x0E,0x30,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  7  --*/
'7',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFC,0x1F,0xFC,
0x10,0x08,0x30,0x10,0x20,0x10,0x20,0x20,0x00,0x20,0x00,0x40,0x00,0x40,0x00,0x40,
0x00,0x80,0x00,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x03,0x00,
0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  8  --*/
'8',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x0C,0x30,
0x18,0x18,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x38,0x0C,0x38,0x08,0x1E,0x18,0x0F,0x20,
0x07,0xC0,0x18,0xF0,0x30,0x78,0x30,0x38,0x60,0x1C,0x60,0x0C,0x60,0x0C,0x60,0x0C,
0x60,0x0C,0x30,0x18,0x18,0x30,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  9  --*/
'9',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x18,0x20,
0x30,0x10,0x30,0x18,0x60,0x08,0x60,0x0C,0x60,0x0C,0x60,0x0C,0x60,0x0C,0x60,0x0C,
0x70,0x1C,0x30,0x2C,0x18,0x6C,0x0F,0x8C,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x10,
0x30,0x30,0x30,0x60,0x30,0xC0,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  A  --*/
'A',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,
0x03,0x80,0x03,0x80,0x04,0xC0,0x04,0xC0,0x04,0xC0,0x04,0xC0,0x0C,0x40,0x08,0x60,
0x08,0x60,0x08,0x60,0x18,0x20,0x1F,0xF0,0x10,0x30,0x10,0x30,0x10,0x30,0x20,0x18,
0x20,0x18,0x20,0x18,0x60,0x1C,0xF8,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  B  --*/
'B',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x18,0x38,
0x18,0x18,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x18,0x18,0x30,
0x1F,0xE0,0x18,0x18,0x18,0x0C,0x18,0x04,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,
0x18,0x06,0x18,0x0C,0x18,0x18,0x7F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  C  --*/
'C',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0x06,0x1C,
0x08,0x0C,0x18,0x06,0x30,0x02,0x30,0x02,0x30,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x30,0x02,0x30,0x02,
0x10,0x04,0x18,0x08,0x0C,0x10,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  D  --*/
'D',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x18,0x70,
0x18,0x18,0x18,0x08,0x18,0x0C,0x18,0x0C,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,
0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x04,0x18,0x0C,0x18,0x0C,
0x18,0x18,0x18,0x18,0x18,0x60,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  E  --*/
'E',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x18,0x0C,
0x18,0x04,0x18,0x02,0x18,0x02,0x18,0x00,0x18,0x00,0x18,0x10,0x18,0x10,0x18,0x30,
0x1F,0xF0,0x18,0x30,0x18,0x10,0x18,0x10,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x02,
0x18,0x02,0x18,0x04,0x18,0x0C,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  F  --*/
'F',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x18,0x1C,
0x18,0x04,0x18,0x02,0x18,0x02,0x18,0x00,0x18,0x00,0x18,0x10,0x18,0x10,0x18,0x30,
0x1F,0xF0,0x18,0x30,0x18,0x10,0x18,0x10,0x18,0x10,0x18,0x00,0x18,0x00,0x18,0x00,
0x18,0x00,0x18,0x00,0x18,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  G  --*/
'G',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x0C,0x30,
0x08,0x10,0x18,0x18,0x30,0x08,0x30,0x08,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
0x60,0x00,0x60,0x00,0x60,0x7E,0x60,0x18,0x60,0x18,0x20,0x18,0x30,0x18,0x30,0x18,
0x10,0x18,0x18,0x18,0x0C,0x20,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  H  --*/
'H',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0x30,0x0C,
0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,
0x3F,0xFC,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,
0x30,0x0C,0x30,0x0C,0x30,0x0C,0xFC,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  I  --*/
'I',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF8,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  J  --*/
'J',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x60,
0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,
0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,
0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x70,0x60,0x70,0xC0,0x71,0x80,0x3F,0x00,
/*--  文字:  K  --*/
'K',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7C,0x18,0x30,
0x18,0x20,0x18,0x60,0x18,0x40,0x18,0x80,0x18,0x80,0x19,0x00,0x19,0x00,0x1B,0x00,
0x1D,0x80,0x1D,0x80,0x18,0xC0,0x18,0xC0,0x18,0x60,0x18,0x60,0x18,0x30,0x18,0x30,
0x18,0x30,0x18,0x18,0x18,0x18,0x7E,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  L  --*/
'L',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x18,0x00,
0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,
0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x02,
0x18,0x02,0x18,0x04,0x18,0x0C,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  M  --*/
'M',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x0F,0x38,0x1C,
0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x4C,
0x2C,0x4C,0x26,0x4C,0x26,0x4C,0x26,0x4C,0x26,0x8C,0x22,0x8C,0x23,0x8C,0x23,0x8C,
0x23,0x0C,0x23,0x0C,0x21,0x0C,0xF1,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  N  --*/
'N',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x1F,0x38,0x04,
0x38,0x04,0x2C,0x04,0x2C,0x04,0x26,0x04,0x26,0x04,0x23,0x04,0x23,0x04,0x21,0x84,
0x21,0x84,0x20,0xC4,0x20,0xC4,0x20,0x64,0x20,0x64,0x20,0x34,0x20,0x34,0x20,0x1C,
0x20,0x1C,0x20,0x0C,0x20,0x0C,0xF8,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  O  --*/
'O',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x0C,0x30,
0x18,0x18,0x10,0x08,0x30,0x0C,0x30,0x0C,0x60,0x04,0x60,0x06,0x60,0x06,0x60,0x06,
0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x20,0x06,0x30,0x0C,0x30,0x0C,
0x10,0x08,0x18,0x18,0x0C,0x30,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  P  --*/
'P',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF0,0x18,0x18,
0x18,0x0C,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x0C,
0x18,0x18,0x1F,0xE0,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,
0x18,0x00,0x18,0x00,0x18,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  Q  --*/
'Q',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x0C,0x30,
0x18,0x18,0x10,0x08,0x30,0x0C,0x30,0x0C,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,
0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x27,0x84,0x38,0xCC,
0x38,0x6C,0x18,0x78,0x0C,0x70,0x03,0xE0,0x00,0x32,0x00,0x3C,0x00,0x1C,0x00,0x00,
/*--  文字:  R  --*/
'R',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x18,0x38,
0x18,0x18,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x18,0x18,0x30,
0x1F,0xE0,0x18,0xC0,0x18,0xC0,0x18,0x60,0x18,0x60,0x18,0x60,0x18,0x30,0x18,0x30,
0x18,0x30,0x18,0x18,0x18,0x18,0x7E,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  S  --*/
'S',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC8,0x18,0x78,
0x30,0x18,0x60,0x18,0x60,0x08,0x60,0x08,0x60,0x00,0x70,0x00,0x3C,0x00,0x1F,0x00,
0x07,0xC0,0x01,0xF0,0x00,0x78,0x00,0x18,0x00,0x1C,0x40,0x0C,0x40,0x0C,0x60,0x0C,
0x20,0x0C,0x30,0x18,0x38,0x30,0x27,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  T  --*/
'T',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFC,0x31,0x84,
0x21,0x86,0x41,0x82,0x41,0x82,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  U  --*/
'U',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3E,0x30,0x08,
0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,
0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,0x30,0x08,
0x30,0x08,0x18,0x10,0x1C,0x20,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  V  --*/
'V',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x1E,0x18,0x0C,
0x18,0x08,0x18,0x08,0x18,0x08,0x0C,0x10,0x0C,0x10,0x0C,0x10,0x0C,0x10,0x0C,0x20,
0x06,0x20,0x06,0x20,0x06,0x20,0x06,0x40,0x03,0x40,0x03,0x40,0x03,0x40,0x03,0x80,
0x01,0x80,0x01,0x80,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  W  --*/
'W',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF3,0xCF,0x61,0x86,
0x61,0x84,0x21,0x84,0x20,0x84,0x30,0xC4,0x31,0xC4,0x31,0xC4,0x31,0xC8,0x31,0xC8,
0x11,0xC8,0x12,0x48,0x1A,0x68,0x1A,0x68,0x1A,0x70,0x1C,0x70,0x0C,0x70,0x0C,0x70,
0x0C,0x30,0x0C,0x20,0x08,0x20,0x08,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  X  --*/
'X',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x3E,0x18,0x08,
0x18,0x10,0x0C,0x10,0x0C,0x20,0x06,0x20,0x06,0x40,0x03,0x40,0x03,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0xC0,0x02,0xC0,0x02,0x60,0x04,0x60,0x04,0x70,0x08,0x30,
0x08,0x30,0x18,0x18,0x10,0x1C,0x7C,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  Y  --*/
'Y',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x3E,0x38,0x08,
0x18,0x08,0x18,0x10,0x0C,0x10,0x0C,0x10,0x0C,0x20,0x06,0x20,0x06,0x20,0x03,0x40,
0x03,0x40,0x03,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  Z  --*/
'Z',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFE,0x1C,0x0C,
0x18,0x0C,0x30,0x18,0x20,0x18,0x00,0x30,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,
0x01,0x80,0x01,0x80,0x03,0x00,0x03,0x00,0x06,0x00,0x06,0x00,0x0C,0x00,0x18,0x02,
0x18,0x06,0x30,0x04,0x30,0x1C,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  [  --*/
'[',
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFC,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,
/*--  文字:  \  --*/
'\\',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x08,0x00,
0x0C,0x00,0x04,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x03,0x00,0x01,0x00,0x01,0x80,
0x01,0x80,0x00,0x80,0x00,0xC0,0x00,0x40,0x00,0x60,0x00,0x60,0x00,0x30,0x00,0x30,
0x00,0x30,0x00,0x18,0x00,0x18,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x06,0x00,0x00,
/*--  文字:  ]  --*/
']',
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,
0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,
0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,
0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x3F,0xC0,0x00,0x00,0x00,0x00,
/*--  文字:  ^  --*/
'^',
0x00,0x00,0x00,0x00,0x03,0xC0,0x03,0xE0,0x06,0x20,0x08,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  _  --*/
'_',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
/*--  文字:  `  --*/
'`',
0x00,0x00,0x00,0x00,0x1E,0x00,0x03,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  a  --*/
'a',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x18,0x30,0x30,0x18,
0x30,0x18,0x30,0x18,0x00,0x38,0x07,0xD8,0x1C,0x18,0x30,0x18,0x60,0x18,0x60,0x18,
0x60,0x18,0x60,0x19,0x30,0x79,0x1F,0x8E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  b  --*/
'b',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x78,0x00,0x18,0x00,
0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x19,0xE0,0x1A,0x38,0x1C,0x18,
0x1C,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,
0x18,0x08,0x1C,0x18,0x1C,0x30,0x13,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  c  --*/
'c',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0x0E,0x10,0x0C,0x18,
0x18,0x18,0x30,0x18,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x04,
0x18,0x04,0x18,0x08,0x0C,0x10,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  d  --*/
'd',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x78,0x00,0x18,
0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x07,0xD8,0x0C,0x38,0x18,0x18,
0x18,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,
0x10,0x18,0x18,0x38,0x0C,0x5E,0x07,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  e  --*/
'e',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x0C,0x30,0x08,0x18,
0x18,0x08,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x3F,0xFC,0x30,0x00,0x30,0x00,0x30,0x00,
0x18,0x04,0x18,0x08,0x0E,0x18,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  f  --*/
'f',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x01,0x86,
0x01,0x06,0x03,0x06,0x03,0x00,0x03,0x00,0x03,0x00,0x3F,0xF8,0x03,0x00,0x03,0x00,
0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
0x03,0x00,0x03,0x00,0x03,0x00,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  g  --*/
'g',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xEE,0x0C,0x36,0x08,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x08,0x18,0x0C,0x30,0x0F,0xE0,0x18,0x00,0x18,0x00,
0x1F,0xC0,0x0F,0xF8,0x18,0x1C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x18,0x18,0x07,0xE0,
/*--  文字:  h  --*/
'h',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x78,0x00,0x18,0x00,
0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x19,0xE0,0x1A,0x30,0x1C,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  i  --*/
'i',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x03,0xC0,
0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1F,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  j  --*/
'j',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x78,
0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x03,0xF0,0x00,0x30,0x00,0x30,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x18,0x60,0x18,0x40,0x0F,0x80,
/*--  文字:  k  --*/
'k',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x78,0x00,0x18,0x00,
0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x7C,0x18,0x30,0x18,0x20,
0x18,0x40,0x18,0x80,0x19,0x80,0x1B,0x80,0x1E,0xC0,0x1C,0xC0,0x18,0x60,0x18,0x30,
0x18,0x30,0x18,0x18,0x18,0x1C,0x7E,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  l  --*/
'l',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1F,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  m  --*/
'm',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0xEF,0x3C,0x71,0xC6,0x61,0x86,
0x61,0x86,0x61,0x86,0x61,0x86,0x61,0x86,0x61,0x86,0x61,0x86,0x61,0x86,0x61,0x86,
0x61,0x86,0x61,0x86,0x61,0x86,0xF3,0xCF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  n  --*/
'n',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0xE0,0x7A,0x30,0x1C,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  o  --*/
'o',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x0C,0x30,0x08,0x18,
0x18,0x18,0x10,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,
0x18,0x18,0x18,0x18,0x0C,0x30,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  p  --*/
'p',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0xE0,0x7A,0x30,0x1C,0x18,
0x18,0x08,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,
0x18,0x18,0x1C,0x18,0x1E,0x30,0x19,0xE0,0x18,0x00,0x18,0x00,0x18,0x00,0x7E,0x00,
/*--  文字:  q  --*/
'q',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC8,0x0C,0x78,0x18,0x38,
0x18,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,0x30,0x18,
0x10,0x18,0x18,0x38,0x0C,0x78,0x07,0x98,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x7E,
/*--  文字:  r  --*/
'r',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x1C,0x7E,0x66,0x06,0x86,
0x07,0x80,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
0x06,0x00,0x06,0x00,0x06,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  s  --*/
's',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE4,0x06,0x1C,0x0C,0x0C,
0x0C,0x04,0x0C,0x04,0x0E,0x00,0x07,0xC0,0x01,0xF0,0x00,0x78,0x00,0x1C,0x10,0x0C,
0x10,0x0C,0x18,0x0C,0x1C,0x18,0x13,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  t  --*/
't',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x07,0x00,0x3F,0xF8,0x03,0x00,0x03,0x00,
0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
0x03,0x04,0x03,0x04,0x01,0x88,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  u  --*/
'u',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x78,0x78,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x38,0x0C,0x5E,0x07,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  v  --*/
'v',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x3E,0x18,0x0C,0x18,0x08,
0x18,0x18,0x0C,0x10,0x0C,0x10,0x04,0x20,0x06,0x20,0x06,0x20,0x03,0x40,0x03,0x40,
0x03,0xC0,0x01,0x80,0x01,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  w  --*/
'w',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFB,0xCF,0x61,0x86,0x21,0x84,
0x31,0x84,0x31,0x84,0x31,0xC8,0x11,0xC8,0x1A,0xC8,0x1A,0x48,0x1A,0x70,0x0E,0x70,
0x0C,0x70,0x0C,0x30,0x0C,0x20,0x04,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  x  --*/
'x',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x7C,0x0C,0x10,0x0E,0x10,
0x06,0x20,0x03,0x40,0x03,0x40,0x01,0x80,0x01,0x80,0x01,0xC0,0x02,0x60,0x04,0x60,
0x04,0x30,0x08,0x18,0x18,0x18,0x7C,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  y  --*/
'y',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x3E,0x18,0x18,0x18,0x10,
0x08,0x10,0x0C,0x10,0x04,0x20,0x06,0x20,0x06,0x20,0x02,0x40,0x03,0x40,0x01,0x40,
0x01,0x80,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x02,0x00,0x3E,0x00,0x3C,0x00,
/*--  文字:  z  --*/
'z',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x30,0x38,0x30,0x30,
0x20,0x60,0x20,0xE0,0x00,0xC0,0x01,0x80,0x03,0x80,0x03,0x00,0x06,0x00,0x0E,0x04,
0x0C,0x04,0x18,0x0C,0x30,0x18,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  {  --*/
'{',
0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x10,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,
0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0xC0,
0x01,0x80,0x00,0x40,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,
0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x10,0x00,0x0C,0x00,0x00,
/*--  文字:  |  --*/
'|',
0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,
0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,
0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,
0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,
/*--  文字:  }  --*/
'}',
0x00,0x00,0x00,0x00,0x18,0x00,0x04,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x01,0x80,
0x00,0xC0,0x01,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x04,0x00,0x18,0x00,0x00,0x00,
/*--  文字:  ~  --*/
'~',
0x00,0x00,0x1E,0x00,0x23,0x00,0x41,0x82,0x40,0x82,0x00,0xE4,0x00,0x38,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:     --*/
' ',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  !  --*/
'!',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x03,0xC0,
0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x01,0xC0,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x80,0x03,0xC0,0x03,0xC0,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  "  --*/
'"',
0x00,0x00,0x00,0x00,0x03,0x18,0x07,0x38,0x07,0x38,0x0E,0x70,0x0C,0x60,0x18,0xC0,
0x31,0x80,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  #  --*/
'#',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x08,0x04,0x08,
0x04,0x08,0x04,0x08,0x04,0x08,0x7F,0xFE,0x7F,0xFE,0x7F,0xFE,0x08,0x10,0x08,0x10,
0x08,0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x7F,0xFE,0x7F,0xFE,0x7F,0xFE,0x18,0x30,
0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  $  --*/
'$',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x03,0xC0,0x0D,0x30,
0x09,0x18,0x19,0x18,0x19,0x38,0x19,0x38,0x1D,0x00,0x0D,0x00,0x0F,0x00,0x07,0x00,
0x03,0xC0,0x01,0xE0,0x01,0xF0,0x01,0x30,0x01,0x38,0x01,0x18,0x39,0x18,0x39,0x18,
0x31,0x18,0x31,0x30,0x19,0x60,0x07,0xC0,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,
/*--  文字:  %  --*/
'%',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x10,0x6C,0x10,
0x44,0x20,0xC6,0x20,0xC6,0x40,0xC6,0x40,0xC6,0x40,0xC6,0x80,0xC6,0x80,0x44,0x80,
0x6D,0x38,0x39,0x6C,0x02,0x44,0x02,0xC6,0x02,0xC6,0x04,0xC6,0x04,0xC6,0x08,0xC6,
0x08,0xC6,0x08,0x44,0x10,0x6C,0x10,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  &  --*/
'&',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x00,
0x31,0x80,0x31,0x80,0x31,0x80,0x31,0x80,0x31,0x00,0x33,0x00,0x3A,0x00,0x1C,0x00,
0x38,0x7C,0x3C,0x10,0x4C,0x10,0xCE,0x10,0xC6,0x20,0xC7,0x20,0xC3,0x20,0xC1,0xC0,
0xC1,0xC2,0x60,0xE6,0x31,0x7C,0x1E,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  '  --*/
'\'',
0x00,0x00,0x00,0x00,0x38,0x00,0x3C,0x00,0x3C,0x00,0x0C,0x00,0x0C,0x00,0x08,0x00,
0x30,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  (  --*/
'(',
0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x00,0x08,0x00,0x18,0x00,0x30,0x00,0x20,
0x00,0x60,0x00,0x40,0x00,0xC0,0x00,0xC0,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00,0xC0,0x00,0xC0,0x00,0x40,
0x00,0x60,0x00,0x20,0x00,0x30,0x00,0x18,0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x00,
/*--  文字:  )  --*/
')',
0x00,0x00,0x00,0x00,0x40,0x00,0x20,0x00,0x10,0x00,0x18,0x00,0x0C,0x00,0x04,0x00,
0x06,0x00,0x02,0x00,0x03,0x00,0x03,0x00,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x03,0x00,0x03,0x00,0x03,0x00,
0x06,0x00,0x04,0x00,0x0C,0x00,0x18,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x00,0x00,
/*--  文字:  *  --*/
'*',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0x01,0xC0,0x01,0xC0,0x30,0xC6,0x38,0x8E,0x1C,0x9C,0x06,0xB0,0x01,0xC0,
0x01,0xC0,0x06,0xB0,0x1C,0x9C,0x38,0x8E,0x31,0x86,0x01,0xC0,0x01,0xC0,0x01,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  +  --*/
'+',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,
0x3F,0xFE,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  ,  --*/
',',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x38,0x00,0x3C,0x00,0x3C,0x00,0x0C,0x00,0x0C,0x00,0x08,0x00,0x30,0x00,0x60,0x00,
/*--  文字:  -  --*/
'-',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  .  --*/
'.',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x18,0x00,0x3C,0x00,0x3C,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  /  --*/
'/',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x04,0x00,0x0C,0x00,0x08,
0x00,0x18,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x60,0x00,0x40,0x00,0xC0,0x00,0x80,
0x01,0x80,0x01,0x00,0x03,0x00,0x02,0x00,0x06,0x00,0x04,0x00,0x0C,0x00,0x08,0x00,
0x18,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x60,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  :  --*/
':',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x03,0xC0,0x03,0xC0,
0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x80,0x03,0xC0,0x03,0xC0,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  ;  --*/
';',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,
0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x01,0x80,0x03,0x00,0x03,0x00,0x00,0x00,
/*--  文字:  <  --*/
'<',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x08,
0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,0x02,0x00,0x04,0x00,0x08,0x00,
0x10,0x00,0x10,0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x40,
0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  =  --*/
'=',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  >  --*/
'>',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x10,0x00,
0x08,0x00,0x04,0x00,0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x10,
0x00,0x08,0x00,0x08,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,0x02,0x00,
0x04,0x00,0x08,0x00,0x10,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  ?  --*/
'?',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0x0C,0x18,
0x18,0x0C,0x10,0x06,0x30,0x06,0x38,0x06,0x38,0x06,0x38,0x06,0x00,0x0C,0x00,0x18,
0x00,0x70,0x00,0xC0,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x00,
0x01,0x80,0x03,0xC0,0x03,0xC0,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*--  文字:  @  --*/
'@',
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0x06,0x10,
0x0C,0x08,0x18,0x04,0x30,0xD4,0x31,0xB2,0x21,0x32,0x63,0x32,0x63,0x22,0x66,0x22,
0x66,0x22,0x66,0x22,0x66,0x62,0x66,0x64,0x66,0x64,0x26,0xE8,0x33,0x30,0x30,0x02,
0x10,0x04,0x18,0x0C,0x0C,0x18,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//ord:95
0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	
};	 
#endif	


//------------------汉字库-----------------------------------------------
#ifdef CHINA_FONT_W32_H32
const unsigned   char China_Font_Index[][2] = 
{
"年", "月", "日", "时", "分", "秒",
};

const unsigned   char China_Font[][CHINA_FONT_DAT_NUM] =
{
//宋体，点阵为32*32
0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x60,0x00,0x00,
0x00,0xE0,0x00,0x00,0x00,0xC0,0x00,0x00,0x01,0x80,0x00,0x30,0x01,0xFF,0xFF,0xF8,
0x03,0x00,0xC0,0x00,0x02,0x00,0xC0,0x00,0x06,0x00,0xC0,0x00,0x0C,0x00,0xC0,0x00,
0x18,0x00,0xC0,0x00,0x11,0x00,0xC0,0xC0,0x21,0xFF,0xFF,0xE0,0x01,0x80,0xC0,0x00,
0x01,0x80,0xC0,0x00,0x01,0x80,0xC0,0x00,0x01,0x80,0xC0,0x00,0x01,0x80,0xC0,0x00,
0x01,0x80,0xC0,0x18,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,
0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,
0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,/* "年" 0*/
1,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
0x00,0x7F,0xFF,0x80,0x00,0x60,0x01,0x00,0x00,0x60,0x01,0x00,0x00,0x60,0x01,0x00,
0x00,0x60,0x01,0x00,0x00,0x60,0x01,0x00,0x00,0x60,0x01,0x00,0x00,0x7F,0xFF,0x00,
0x00,0x40,0x01,0x00,0x00,0x40,0x01,0x00,0x00,0x40,0x01,0x00,0x00,0x40,0x01,0x00,
0x00,0x40,0x01,0x00,0x00,0x40,0x01,0x00,0x00,0x7F,0xFF,0x00,0x00,0xC0,0x01,0x00,
0x00,0xC0,0x01,0x00,0x00,0xC0,0x01,0x00,0x00,0xC0,0x01,0x00,0x01,0x80,0x01,0x00,
0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x01,0x00,0x06,0x00,0x43,0x00,
0x0C,0x00,0x3F,0x00,0x18,0x00,0x06,0x00,0x20,0x00,0x04,0x00,0x00,0x00,0x00,0x00,/*1*/
/* (32 X 32 , ?? )*/
2,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x80,
0x01,0xFF,0xFF,0xC0,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xFF,0xFF,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xFF,0xFF,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*2*/
/* (32 X 32 , ?? )*/
3,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x80,
0x00,0x00,0x03,0x00,0x00,0x20,0x03,0x00,0x1F,0xF0,0x03,0x00,0x18,0x30,0x03,0x00,
0x18,0x30,0x03,0x00,0x18,0x30,0x03,0x18,0x18,0x3F,0xFF,0xFC,0x18,0x30,0x03,0x00,
0x18,0x30,0x03,0x00,0x18,0x30,0x03,0x00,0x18,0x32,0x03,0x00,0x1F,0xF1,0x03,0x00,
0x18,0x31,0xC3,0x00,0x18,0x30,0xC3,0x00,0x18,0x30,0xE3,0x00,0x18,0x30,0x43,0x00,
0x18,0x30,0x03,0x00,0x18,0x30,0x03,0x00,0x18,0x30,0x03,0x00,0x1F,0xF0,0x03,0x00,
0x18,0x30,0x03,0x00,0x18,0x30,0x03,0x00,0x18,0x00,0x03,0x00,0x00,0x00,0x03,0x00,
0x00,0x00,0x3F,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,/*3*/
/* (32 X 32 , ?? )*/
4,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x18,0x30,0x00,
0x00,0x1C,0x10,0x00,0x00,0x18,0x10,0x00,0x00,0x30,0x18,0x00,0x00,0x30,0x08,0x00,
0x00,0x60,0x0C,0x00,0x00,0xC0,0x04,0x00,0x00,0xC0,0x06,0x00,0x01,0x80,0x03,0x00,
0x03,0x00,0x01,0x80,0x02,0x00,0x02,0xE0,0x05,0xFF,0xFF,0x7C,0x08,0x06,0x06,0x38,
0x10,0x06,0x06,0x00,0x20,0x04,0x06,0x00,0x00,0x0C,0x06,0x00,0x00,0x0C,0x06,0x00,
0x00,0x0C,0x06,0x00,0x00,0x18,0x06,0x00,0x00,0x18,0x06,0x00,0x00,0x10,0x06,0x00,
0x00,0x30,0x06,0x00,0x00,0x60,0x04,0x00,0x00,0xC0,0x0C,0x00,0x01,0x81,0x0C,0x00,
0x03,0x00,0xFC,0x00,0x04,0x00,0x38,0x00,0x18,0x00,0x20,0x00,0x00,0x00,0x00,0x00,/*4*/
/* (32 X 32 , ?? )*/
5,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x38,0x06,0x00,
0x00,0xFC,0x06,0x00,0x1F,0x80,0x06,0x00,0x01,0x80,0x06,0x00,0x01,0x80,0x06,0x00,
0x01,0x80,0x06,0x80,0x01,0x80,0xE6,0x60,0x01,0x88,0xC6,0x30,0x3F,0xFC,0xC6,0x18,
0x01,0x80,0x86,0x0C,0x01,0x80,0x86,0x0C,0x03,0x81,0x86,0x08,0x03,0xF1,0x06,0x00,
0x03,0xB9,0x06,0x00,0x07,0x9A,0x06,0x30,0x05,0x9A,0x06,0x38,0x09,0x84,0x06,0x60,
0x19,0x80,0x06,0xE0,0x11,0x80,0x05,0xC0,0x21,0x80,0x01,0x80,0x41,0x80,0x03,0x00,
0x01,0x80,0x06,0x00,0x01,0x80,0x1C,0x00,0x01,0x80,0x30,0x00,0x01,0x80,0xE0,0x00,
0x01,0x83,0x80,0x00,0x01,0x9C,0x00,0x00,0x01,0x20,0x00,0x00,0x00,0x00,0x00,0x00,/*5*/
};	 
#endif	 
