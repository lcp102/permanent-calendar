 /*����Ӳ����ʱ����ȡʱ�䲢�ŵ�������*/
#include"END.h"
sbit p36=P3^6;
uint hour,min,sec;
void timer0_init(){		 //��ʱ��T0��ʼ��
   	TMOD=0x61;
	TH0=0x03c;
	TL0=0x0b0;
	TH1=0x0f6;
	TL1=0x0f6;
	TR0=1;
	TR1=1;

	ET0=1;
	ET1=1;
	EA=1;

}
void Handle() //ʱ�䴦����ȡ����
{
{
   if(sec==60)
    {
      sec=0;
      min++;
      if(min==60)
      {
	    min=0;
        hour++;
      if(hour==24)
       hour=0;
	  }
    }
}
dis1[11]=sec%10+0x30; //���õ���ʱ����ֵת����ascll����1602ʶ��
dis1[10]=sec/10+0x30;

dis1[8]=min%10+0x30;
dis1[7]=min/10+0x30;

dis1[5]=hour%10+0x30;
dis1[4]=hour/10+0x30;
}  
void t0() interrupt 1//������0�ڲ���ʱ65636���������ж�һ��ʹp36��50ms�䷴һ��,100msһ������)

{	
	TF0=0;
	TH0=0x03c;
	TL0=0x0b0;
	p36=~p36;
}
void t1() interrupt 3//��ʱ��1�ⲿ����������10���ⲿ�����������1���������1���1����P3.6?P3.5��
{	
	
	TF1=0;
	sec++;
}