#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	
	printf("Enter numbers: ");
	scanf("%ld",&n);
	
    do{
	
		while(n > 0)
		{digit = n % 10;   
		if(digit_seen[digit])     //�����λ��ʼ��¼������λ�ϵ����� 
		    break;                // ��¼һ��֮����ʹ������Ӧ���ֱ�Ϊtrue������һ����λҲ�Ǹ����֣�����ѭ�� 
 		digit_seen[digit] = true;    //��¼������λ�ϵ����� 
		n/= 10;                      //��¼������λ 
        }
	if (n > 0)
	   printf("Repeated digit\n");     //����ѭ��ʱ����Ϊ�㣬˵������ѭ����break������ͬһ���ּ�����Σ����ظ� 
	else 
	   printf("No repeated digit\n");   //��Ϊ0��������ѭ�����޸�����λ��¼�����������ظ� 
    printf("%ld",n);
    printf("\n");
    
	bool digit_seen[10] = {false};  //�������� 
    scanf("%ld",&n);                //�����һ���� 
	}while(n > 0);
	return 0;
 } 	
