#include<stdio.h> 
int main()
{
	int n,i,m,j,k;
	scanf("%d", &n);
	m = (n + 1) / 2;
	for (i = 1; i <= n; i++)  //һ��һ�е�ѭ����ӡ
	{
		if (i <= m)           //������������ϰ벿�ֺ��°벿��
		{
			for (j = m - i; j > 0; j--)
				printf(" ");
			for (k = i; k > 0; k--)
				printf("* ");
		}
		else
		{
			for (j = i-m; j > 0; j--)
				printf(" ");
			for (k = 2*m-i; k > 0; k--)
				printf("* ");
		}
		printf("\n");        //ע�⻻��
	}
}

