//!�ǳ���Ҫʵ��
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int strLen = 5;                                    //�����׼����Ϊ5
    char ch;                                           //����һ�������ַ�������
    char *str = (char *)malloc(sizeof(char) * strLen); //�﷨ �ַ�ָ�� ǿ������ת�� malloc 5���ַ����鴢������Ҫ�Ŀռ�
    //printf("str_pre=:%d\n",str);//�鿴ָ��str��ַ
    printf("%d\n", sizeof(str));
    int count = 0; //������ͳ���ַ�����
    printf("Please input a string: \n");
    do
    {
        ch = getchar(); //һ�ν����û�������ַ�
        count++;
        if (count >= strLen) //�������˵�5���ַ���ʱ��
        {                    //ÿ�����·����һ���ڴ�ռ䣻
            str = (char *)realloc(str, sizeof(char) * (++strLen));
        }
        str[count - 1] = ch;
    } while (ch != '\n'); //���һ������'0'
    //printf("str_lat=:%d\n",str);//�鿴ʹ��realloc��ָ��str��ַ
    printf("count=%d\n", count);
    str[count] = '\0'; //�ַ���������ǡ�0���Ļ������
    puts(str);
    system("pause");
    return 0;
    //��bug��������С��5���ַ�ʱcount��5
}