//求数组元素的平均值，输入10个值，要求去掉最大值和最小值
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[], int n);
void output(int a[], int n);
void deletemax(int a[], int n);
void deletemin(int a[], int n);
double averge(int a[], int n);
int main()
{
    int a[10];
    input(a, 10);
    printf("现在数组元素为:\n");
    output(a, 10);
    deletemax(a, 10);
    deletemin(a, 9);
    printf("去掉最大最小值后数组元素变为:\n");
    output(a, 8);
    printf("数组的平均值为:%d\n", averge(a, 8));
    system("pause");
    return 0;
}
void input(int a[], int n)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
}
void output(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void deletemax(int a[], int n)
{
    int i, max = a[0];
    for (i = 0; i < n - 1; i++)
    {
        if (max < a[i + 1])
        {
            max = a[i + 1];
        }
    } //!定位
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == max)
        {
            for (; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            break; //注意这个break的细节，不然会将全部的最大值删去
        }
    } //!移位
    //!个数减一是通过输出少一个元素来实现的,因此计算平均值的时候应该少两个元素
}
void deletemin(int a[], int n)
{
    int i, min = a[0];
    for (i = 0; i < n - 1; i++)
    {
        if (min > a[i + 1])
        {
            min = a[i + 1];
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == min)
        {
            for (; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            break;
        }
    }
}
double averge(int a[], int n)
{
    int i;
    double sum = 0;
    double averge;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    averge = sum / n;
}