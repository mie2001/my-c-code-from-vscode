#include <stdio.h>
#include <stdlib.h>
void putbehind(int a[], int b); //该函数实现每次将数组的元素往后移动一个位置
int main()
{
    int m;
    int i;
    printf("输入你想要顺序往后移动位置的数值:\n");
    scanf("%d", &m);
    while (m < 0 || m > 10)
    {
        printf("输入的数字超界，请重新输入\n");
        scanf("%d", &m);
    }
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (i = 1; i <= m; i++)
    {
        putbehind(a, 10);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%3d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
void putbehind(int a[], int b)
{
    int i;
    int j = a[9];
    for (i = 9; i > 0; i--)
    {
        a[i] = a[i - 1];
        if (i == 1)
        {
            a[0] = j;
        }
    }
}