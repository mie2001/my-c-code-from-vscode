//输入一个字符串并过滤掉所有非数字字符
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void delete (char *a)
{
    int i;
    int j;
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] <= '0' || a[i] >= '9')
        {
            for (j = i; j < strlen(a); j++)
            {
                a[j] = a[j + 1];
            }
            i -= 1;
        }
    }
}
int main()
{
    char a[100];
    gets(a);
    delete (a);
    puts(a);
    system("pause");
    return 0;
}