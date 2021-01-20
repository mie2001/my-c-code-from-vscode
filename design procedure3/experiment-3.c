#include <stdio.h>
#include <stdlib.h> //包含动态内存分配的函数
#include <string.h>
int main()
{
    //动态内存分配实现任意长度字符的输入,还可以用链表但没有学
    /*设置一个定长的字符数组。
    记录已经输入的字符个数n。输入字符数量小于n时，存入该数组。大于n时，创建更大的数组。先复制原数组内容，再加入新输入字符。反复这个过程。*/
    char a[1000];
    int i, j = 0;
    gets(a);
    for (i = 0; i < strlen(a); i++) //当没有定义字符数组的长度时strlen()这个函数显得尤为重要
    {
        if (a[i] != 32)
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0'; //在数组最后面加上字符串结束符'\0'
    //输出时遇到字符＇\n'，输出字符会换行
    //输出时遇到字符＇\0'，其后字符不会输出
    a = 1;
    b = 10;

    do
    {
        b -= a;
        a++;
    } while (b-- < 0);
    printf("%d", b);
    printf("%s\n", a);
    system("pause");
    return 0;
}
