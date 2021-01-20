#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;                       //首先定义文件指针
    fp = fopen("D:\\f1.txt", "r+"); //以读和写的方式打开一个文本文件
    char ch;
    char ah;
    if (fp == 0)
    {
        printf("file error\n");
        exit(1);
    }
    printf("请输入内容并以#结束输入\n");
    ch = getchar();
    while (ch != '#')
    {
        fputc(ch, fp);
        ch = getchar();
    }
    rewind(fp);//回到文本开头
    while ((ah = fgetc(fp)) != EOF)
    {
        putchar(ah);
    }
    fclose(fp);
    system("pause");
    return 0;
}