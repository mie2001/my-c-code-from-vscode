//������Ԫ�ص�ƽ��ֵ������10��ֵ��Ҫ��ȥ�����ֵ����Сֵ
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
    printf("��������Ԫ��Ϊ:\n");
    output(a, 10);
    deletemax(a, 10);
    deletemin(a, 9);
    printf("ȥ�������Сֵ������Ԫ�ر�Ϊ:\n");
    output(a, 8);
    printf("�����ƽ��ֵΪ:%d\n", averge(a, 8));
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
    } //!��λ
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == max)
        {
            for (; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            break; //ע�����break��ϸ�ڣ���Ȼ�Ὣȫ�������ֵɾȥ
        }
    } //!��λ
    //!������һ��ͨ�������һ��Ԫ����ʵ�ֵ�,��˼���ƽ��ֵ��ʱ��Ӧ��������Ԫ��
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