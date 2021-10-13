#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int main(void)
{
    char a[10][10];
    int i, j;
    generate_random_walk(a);//��������
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c  ", a[i][j]);

        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    print_array(a);
    return 0;
}

void generate_random_walk(char walk[10][10])//���ú�������ӡ������ͼ��
{
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            walk[i][j] = '.';
}

void print_array(char walk[10][10])//�漴��
{
    srand((unsigned)time(NULL));//���������
    char walker = 'A';//��ʼ������ΪA�����ĳ��λ�ã�Ҳ����˵ֻ��Ҫ��һ������α���������
    int tmp, i = 0, j = 0;
    walk[i][j] = walker;
    walker++;
    for (;;)//��ֹ������ѭ���ڲ���ֻҪ�ܼ����ߣ�����ѭ����ȥ
    {
        tmp = rand() % 4;//���ַ��������ģ4�պ����ֽ����
        if (tmp == 0 && walker <= 'Z')//�������Լ�����Ҵ˴���һ����ѭ��������������Ԫ����ൽZ
        {
            if (i >= 1 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker;
                walker++;
                i = i - 1;//����
            }//Լ�������㣬��һ������
            else if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker;
                walker++;
                i = i + 1;//����
            }
            else if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker;
                walker++;
                j = j - 1;//����
            }
            else if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker;
                walker++;
                j = j + 1;//����
            }//��ӡ������Ϊ�㣬���ƶ���������������
            else//�ĸ����򶼲����㣬����ֹ����
                break;
        }
        else if (tmp == 1 && walker <= 'Z')//��һ����Լ��
        {
            if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker;
                walker++;
                i = i + 1;
            }
            else if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker++;
                j--;
            }
            else if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker++;
                j++;
            }
            else if (i > 0 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker++;
                i--;
            }

            else
                break;//����������
        }
        else if (tmp == 2 && walker <= 'Z')//
        {
            if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker;
                walker++;
                j = j - 1;
            }
            else if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker++;
                j++;
            }
            else if (i > 0 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker++;
                i--;
            }
            else if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker++;
                i++;
            }
            else
                break;//����������
        }
        else if (tmp == 3 && walker <= 'Z')//
        {
            if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker;
                walker++;
                j = j + 1;
            }
            else if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker++;
                j--;
            }

            else if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker++;
                i++;
            }
            else if (i > 0 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker++;
                i--;
            }
            else
                break;//����������
        }
        else
            break; //���������������С�

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c  ", walk[i][j]);
        }
        printf("\n");//��ӡ����õľ���
    }
}
	
