#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("����������ĳ���:\n");
    int a;
    scanf("%d", &a);
    int *p = (int *)malloc(a * sizeof(int));
    //����������ɼ���ǿ������ת��������ϰ�ߣ�����c���Ի��Զ�����ת��
    //�м�malloc��free��˫�ɶ�
    //�м�һ��Ҫ�ж��Ƿ������ڴ�ɹ�
    if (NULL == p)
    {
        exit(1;) //��ʱ���Ǻ����������������
    }
    int i;
    srand(time(NULL));
    printf("δ�ֶ��ͷ��ڴ�ʱ:\n");
    for (i = 0; i < a; i++)
    {
        p[i] = rand() % 100;
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    printf("�ֶ��ͷ��ڴ��:\n");
    for (i = 0; i < a; i++)
    {
        printf("%d ", p[i]);
    }
    system("pause");
    return 0;
}