//!������ʵ�������ַ����������ʵ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int strlen = 5;
    char *a = (char *)malloc(sizeof(char) * strlen); //����һ������Ϊ5���ַ�����
    int count = 0;
    int i;
    for (i = 0; i < count + 1, a[i - 1] != '\n'; i++)

    {
        a[i] = getchar();
        count++;
        if (count >= 5)
        {
            a = (char *)realloc(a, sizeof(char) * (++strlen));
        }
    }
    a[i] = '\0';
    printf("һ��������%d���ַ�\n", count - 1); //Ϊʲô��-1����Ϊ������һ�������ַ�
    printf("�ַ�����ĳ���Ϊ:%d\n", strlen);
    puts(a);
    system("pause");
    return 0;
}