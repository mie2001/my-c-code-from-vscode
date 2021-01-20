#include <stdio.h>
#include <stdlib.h>
//!输入数组元素
void input(int a[], int b)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
}
//!输出数组元素
void output(int a[], int b)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
//!找最大值
int max(int a[], int b)
{
    int i;
    int max = a[0];
    for (i = 0; i < 9; i++)
    {
        if (max < a[i + 1])
        {
            max = a[i + 1];
        }
    }
    return max;
}
//!找最小值
int min(int a[], int b)
{
    int i;
    int min = a[0];
    for (i = 0; i < 9; i++)
    {
        if (min > a[i + 1])
        {
            min = a[i + 1];
        }
    }
    return min;
}
//!查找数组元素
/*void check(int a[], int b, int c)
{
    int i;
    int flag = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == c)
        {
            printf("该数组存在值为%d的元素其元素下标为\n:%d", c, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("该数组不存在值为%d的元素:", c);
    }
    printf("\n");
}*/
//!修改后：新增输出b储存下标实现返回多个下标的功能
int check(int a[], int b[], int c, int d)
{
    int i;
    int j = 0;
    int flag = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == d)
        {
            b[j] = i;
            j++;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("该数组不存在值为%d的元素:\n", d);
        return 0;
    }
    else
    {
        return 1;
    }
}
//!冒泡排序
void sort(int a[], int b)
{
    printf("由小到大排序后数组元素为:\n");
    int i;
    int j;
    int temp;     //*交换
    int flag = 0; //*优化性能
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
        temp = 0;
    }
}
int main()
{
    int array[10];
    input(array, 10);
    printf("目前数组的元素为:\n");
    output(array, 10);
    printf("该数组最大的元素是:\n%d\n", max(array, 10));
    min(array, 10);
    printf("该数组最小的元素是:\n%d\n", min(array, 10));
    printf("请输入你想要查找的一个数组元素的值:\n");
    int d;
    scanf("%d", &d);
    int b[10] = {0}; //全部初始化为0 用于储存多个下标
    int i;
    if (check(array, b, 10, d))
    {
        printf("查找到相同元素的下标为:\n");
        if (b[0] == 0) //当第一个元素即为所要查找的值时
        {
            printf("%d ", b[0]);
        }
        for (i = 0; i < 10; i++)
        {

            if (b[i] != 0) //未被赋予下标的元素不输出
            {
                printf("%d ", b[i]);
            }
        }
        printf("\n");
    }
    sort(array, 10);
    output(array, 10);
    system("pause");
}