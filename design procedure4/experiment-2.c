#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;                       //���ȶ����ļ�ָ��
    fp = fopen("D:\\f1.txt", "r+"); //�Զ���д�ķ�ʽ��һ���ı��ļ�
    char ch;
    char ah;
    if (fp == 0)
    {
        printf("file error\n");
        exit(1);
    }
    printf("���������ݲ���#��������\n");
    ch = getchar();
    while (ch != '#')
    {
        fputc(ch, fp);
        ch = getchar();
    }
    rewind(fp);//�ص��ı���ͷ
    while ((ah = fgetc(fp)) != EOF)
    {
        putchar(ah);
    }
    fclose(fp);
    system("pause");
    return 0;
}