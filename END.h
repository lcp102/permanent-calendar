#include "reg51.h"          //����ͷ�ļ�
#define uchar unsigned char
#define uint  unsigned int
uchar data  dis1[16]={' ',' ',' ',' ',0x00,0x00,':',0x00,0x00,':',0x00,0x00,' ',' ',' ',' ',};//LCD��һ����ʾ��ǰʱ�䣬��ʽ    00:00:00  ,���� �߰� ʮʮһ 
uchar data  dis2[16]={'T','h','e',' ','T',' ','i','s',':',0x00,0x00,0x00,'.',0x00,0xeb,'C'};//LCD��2����ʾThe T is:xxx.x 0xeb,'C'	9 10 11 13 
init_18b20();
write_byte(uchar t);
uchar read_byte();
chuli(uint temperature);
uint get_temp();
void timer0_init();
void Handle();
checkbusy();
wcode(uchar t); 
wdata(uchar t);
xian1();
xian2();
InitLCD();
void delay(uint t);
delay1(uint time);
delay2(uint time);