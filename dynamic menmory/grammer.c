//��ʱ��⶯̬�ڴ��������Ϊ�˽����������
#include <stdio.h>
#include <stdlib.h>
int main()
{   //?�龰��һ��ʼֻ�����˳���Ϊ5���������飬�����û���Ҫ����10��������ʱ���Ҫ�õ���̬�ڴ������������ĳ���
    //!����malloc���÷�,ע��malloc��calloc�÷�һ����Ψһ�������﷨�ͳ�ʼֵ��calloc��ȫ����ʼ��Ϊ0
    /*
    char *p = NULL;
    printf("%d\n", sizeof(p));//һ��charָ���ռ8���ֽڣ�
    printf("%d\n", p);
    p = (char *)malloc(100 * sizeof(char)); //pָ����һ������Ϊ100�ַ�������,��malloc�����˴���ռ��ָ����Ե�����ʹ��
   
    if (NULL == p)
    {
        exit(1); //������˼����
    }
    gets(p); //gets���Զ�����
    puts(p); //putsҲ���Զ�����
    printf("%d\n", sizeof(p));
    printf("%d\n", p);
    free(p);  //�ͷ�p����Ķ�̬�ڴ�ռ�
    p = NULL; //�ǳ���Ҫ����ֹp���Ұָ��,��ָ��ĵ�ַΪ0
    puts(p);
    printf("%d\n", p);
    system("pause");
    return 0;
    */
    //!����realloc���÷�,(��������)realloc(Ҫ�ı��ڴ��С��ָ�����֣��µĴ�С),���µĴ�СС��ԭ���Ĵ�С��ԭ�������ݿ��ܶ�ʧ���߱�����
    int i;
    int a;
    srand(time(NULL));
    printf("����������ĳ���:\n");
    scanf("%d", &a);
    int *p = (int *)malloc(a * sizeof(int));
    for (i = 0; i < a; i++)
    {
        scanf("%d", &p[i]);
    }
    for (i = 0; i < a; i++)
    {
        p[i] = rand() % 100;
    }
}