//!这是我实现任意字符长度输入的实操
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int strlen = 5;
    char *a = (char *)malloc(sizeof(char) * strlen); //创建一个长度为5的字符数组
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
    printf("一共输入了%d个字符\n", count - 1); //为什么是-1，因为接受了一个换行字符
    printf("字符数组的长度为:%d\n", strlen);
    puts(a);
    system("pause");
    return 0;
}