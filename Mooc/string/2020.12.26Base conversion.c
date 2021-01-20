//10进制转换为16进制并以字符串输出
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int u10;
    char u16[10];
    int w = 0, a, b, i;
    printf("请输入一个整数:\n");
    scanf("%d", &u10);
    if (u10 == 0)
    {
        u16[0] = '0';
        w++;
    }
    else
    {
        a = u10;
        while (a)
        {
            b = a % 16;
            if (b < 10)
            {
                u16[w] = '0' + b;
            }
            else
            {
                u16[w] = 'A' + b - 10; //!妙啊
            }
            a = a / 16;
            w++;
        }
    }
    printf("该整数转换为16进制数为:\n");
    for (i = w - 1; i >= 0; i--)
    {
        printf("%c", u16[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}