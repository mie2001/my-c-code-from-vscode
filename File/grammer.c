#include <stdio.h>
#include <stdlib.h>
int main
{
    //�ļ�λ��ָ���Ƶ��ļ���ͷ
    /*
fseek( fp, 0, SEEK_CUR, );
fseek( fp, 0, 0 );
rewind( fp );
fseek(fp, -ftell(fp), SEEK_CUR);
    */
    FILE *fp;
    fp = fopen("f1.txt", "r+");
    while (!feof(fp))
        if (fgetc(fp) == '*')
        {

            fseek(fp, -1, 1);
            fputc('$', fp);
            fflush(fp);
        }

    fclose(fp);
    system("pause");
    return 0;
}