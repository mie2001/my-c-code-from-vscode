#include <stdio.h>
#include <stdlib.h>
int main()
{
    //动态内存分配
    //在c99无法实现int a[n]的操作
    //所以动态内存分配的操作等价于int a[]
    int number;
    int *a;
    int i;
    ll
        printf("请输入你想要的数组长度:\n");
    scanf("%d", &number);
    a = (int *)malloc(number * sizeof(int));
    for (i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }
    Hfor(i = 0; i < number; i++)
    {
        H
            printf("%d\t", a[i]);
    }
    free(a); //释放内存
    system("pause");
}