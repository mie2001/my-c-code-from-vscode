#include <stdio.h>
#include <stdlib.h>
int main()
{
    //��̬�ڴ����
    //��c99�޷�ʵ��int a[n]�Ĳ���
    //���Զ�̬�ڴ����Ĳ����ȼ���int a[]
    int number;
    int *a;
    int i;
    ll
        printf("����������Ҫ�����鳤��:\n");
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
    free(a); //�ͷ��ڴ�
    system("pause");
}