#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char a[10][10];
	int row,col,record,times = 25,n;
    const char letters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R'
	,'S','T','U','V','W','X','Y','Z'};
    //  letters[]���鴢����ĸ��ʹ�鵽����Ӧ��a[][]���鸳ֵΪ��Ӧ��ĸ 
	bool b[10][10] = {false};  //b[][]�������ڴ洢��ĸ��boolֵ���ǲ��������ߵ���ͬ�ĸ��� 
	
	for(row = 0;row < 10;row++)
	   {
	    for(col = 0;col < 10;col++)
	      a[row][col] = {'.'};    	       //��ʼ������ȫΪ '.'
	   } 
	
	srand((unsigned) time(NULL));
	
	row = rand() % 4;
	col = rand() % 4; 
	a[row][col] = letters[0];
	b[row][col] = true;  //ʹĳһ���ַ�ΪA  
	
	while(times > 0)
	{
	  for(n = 1;n < 26;n++)
	  {  
	    restart: 
	   if(!b[row+1][col] || !b[row-1][col] || !b[row][col+1] || !b[row][col-1]) //�ж����������Ƿ���·���� 
	   {
		
		record = rand() % 4;   //ʹrecord ���Ϊ0 1 2 3�е�һ������������record�� 
	    switch(record)
	    {
		   	
		   case 0:                      //������һ�� 
			  if(col -1 < 0)
				goto restart;      //�߳���������ѡ�� 
			  if(!b[row][col - 1])            //�ж��ǲ����ߵ���ͬ�ĵط� 
			    {
			    col--;
				a[row][col] = letters[n]; 
			    b[row][col] = true;
				break;
			    }
			  else         //���ߵ���ͬ�ĵط���������ѡһ������ 
				goto restart;
	       case 1:                      //������һ�� 
			  if(col+1 > 9)
				goto restart;
			  if(!b[row][col+1])
			    {
			    col++;
			    a[row][col] = letters[n];
			    b[row][col] = true;
			    break;
		        }
		      else
				goto restart;
	       case 2:                      //������һ�� 
			  if(row -1 < 0)
				goto restart;
			  if(!b[row -1][col])
			    {
			    row--;
			    a[row][col] = letters[n];
			    b[row][col] = true;
			    break;
		        }
		      else
				goto restart;
	       default:                     //������һ��       
			  if(row +1 > 9)
				goto restart;
			  if(!b[row +1][col])
			    {
			    row++;
			    a[row][col] = letters[n];
			    b[row][col] = true;
			    break;
		        }
		      else
				goto restart;
	    }
		times--;
       }
        else
         goto endding;
     }
    }
    endding:
	
	for(row = 0 ;row < 9;row++)
     {
     	for(col = 0;col < 9;col++)
     	  printf("%c ",a[row][col]);
     	printf("\n");
	 }
    
	return 0;
}
