#include <stdio.h>
#include <stdlib.h>
//!��������Ԫ��
void input(int a[], int b)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
}
//!�������Ԫ��
void output(int a[], int b)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
//!�����ֵ
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
//!����Сֵ
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
//!��������Ԫ��
/*void check(int a[], int b, int c)
{
    int i;
    int flag = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == c)
        {
            printf("���������ֵΪ%d��Ԫ����Ԫ���±�Ϊ\n:%d", c, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("�����鲻����ֵΪ%d��Ԫ��:", c);
    }
    printf("\n");
}*/
//!�޸ĺ��������b�����±�ʵ�ַ��ض���±�Ĺ���
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
        printf("�����鲻����ֵΪ%d��Ԫ��:\n", d);
        return 0;
    }
    else
    {
        return 1;
    }
}
//!ð������
void sort(int a[], int b)
{
    printf("��С�������������Ԫ��Ϊ:\n");
    int i;
    int j;
    int temp;     //*����
    int flag = 0; //*�Ż�����
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
    printf("Ŀǰ�����Ԫ��Ϊ:\n");
    output(array, 10);
    printf("����������Ԫ����:\n%d\n", max(array, 10));
    min(array, 10);
    printf("��������С��Ԫ����:\n%d\n", min(array, 10));
    printf("����������Ҫ���ҵ�һ������Ԫ�ص�ֵ:\n");
    int d;
    scanf("%d", &d);
    int b[10] = {0}; //ȫ����ʼ��Ϊ0 ���ڴ������±�
    int i;
    if (check(array, b, 10, d))
    {
        printf("���ҵ���ͬԪ�ص��±�Ϊ:\n");
        if (b[0] == 0) //����һ��Ԫ�ؼ�Ϊ��Ҫ���ҵ�ֵʱ
        {
            printf("%d ", b[0]);
        }
        for (i = 0; i < 10; i++)
        {

            if (b[i] != 0) //δ�������±��Ԫ�ز����
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