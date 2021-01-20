//选择法排序
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int *a, int n);
void input(int *a, int n);
void output(int *a, int n);
int main()
{
    printf("请输入10个数组元素:\n");
    int a[10];
    input(a, 10);
    output(a, 10);
    printf("选择排序后数组元素为:\n");
    sort(a, 10);
    output(a, 10);
    system("pause");
    return 0;
}
void sort(int *a, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int min = a[0];
    for (; l < n - 1; l++)
    {
        for (i = l; i < n - 1; i++)
        {
            if (min > a[i + 1])
            {
                min = a[i + 1];
            }
        }
        for (j = l; j < n; j++)
        {
            if (a[j] == min)
            {
                a[j] = a[k];
                a[k++] = min;
                break;
            }
        }
        min = a[l + 1];
    }
}

void input(int *a, int n)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
}
void output(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
