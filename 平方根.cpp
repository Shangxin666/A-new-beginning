#include <stdio.h>

int main(void)
{
   float num,x,ave,y;
   int i;
   printf("����һ������ ");
   scanf("%f",&x);
   y = num=1;
   for(i = 0;i < 20;i++)
   {
   	   ave=(y + x/y)/2;
   	   y = ave;
   }
   
    printf("%f��ƽ������%f",x,ave);
	return 0;
}  


