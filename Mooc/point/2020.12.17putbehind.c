#include <stdio.h>
#include <stdlib.h>
void putbehind(int a[], int b); //�ú���ʵ��ÿ�ν������Ԫ�������ƶ�һ��λ��
int main()
{
    int m;
    int i;
    printf("��������Ҫ˳�������ƶ�λ�õ���ֵ:\n");
    scanf("%d", &m);
    while (m < 0 || m > 10)
    {
        printf("��������ֳ��磬����������\n");
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