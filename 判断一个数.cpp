#include <stdio.h>
#include<stdbool.h>
int main()
{
    long int num,temp;
    int i=1;
    printf("������һ��������");
    scanf("%ld",&num);
    temp = num;
    
    //��ȡ������������λ����
    while(temp/10>0){
        i+=1;
        temp = temp/10;
    }
    
    //��ӡ������������λ����������һ��bool�����顣
    printf("����Ϊ%dλ����\n",i);
    bool a[i+1];
    
    //��ʼ������������Ԫ��Ϊ0.
    for(int j=0;j<i+1;j++){
        a[j] = 0;
    }
    
    //�ж��Ƿ����ظ������֡�
    do{
        int n = num % 10;
        if(a[n]==1){
            printf("�����ظ��ˡ�\n");
            break;
        }
        a[n] = 1;
        num /= 10;
    }while(num);
    
    if(num==0){
        printf("û���ظ���\n");
    }
    
    return 0;
}

