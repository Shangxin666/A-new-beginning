#include <stdio.h>

#define NUM_ROWS 10
#define NUM_COLS 10 

int main()
{
	int a[NUM_ROWS][NUM_COLS],(*P)[NUM_COLS],5;
	
	for(p = &a[0];p < &a[NUM_ROWS];P++) //pָ���0�еĵ�һ��Ԫ�� 
    (*p) [5] = 0;
	

	return 0;
} 
