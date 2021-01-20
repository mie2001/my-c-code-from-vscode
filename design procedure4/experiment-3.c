#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char ID[20];
    char name[30];
    int age;
    double score;
} Student;

void CreateFile(Student students[], int j)
{
    FILE *fp;
    int i;

    fp = fopen("D:/Info.dat", "wb");

    if (!fp)
    {
        printf("file error\n"); //检查文件指针
        exit(1);
    }

    for (i = 0; i < j; i++)
    {
        fwrite(&students[i].ID, 1, strlen(students[i].ID) + 1, fp);
        fwrite(&students[i].name, 1, strlen(students[i].name) + 1, fp);
        fwrite(&students[i].age, 1, sizeof(int), fp);
        fwrite(&students[i].score, 1, sizeof(double), fp);
    }

    fclose(fp);
}

void Sort(Student students[], int j)
{
    Student buffer;
    int i;
    int k;

    for (i = 1; i < j; i++)
    {
        for (k = 0; k < i; k++)
        {
            if (students[i].score > students[k].score)
            {
                buffer = students[i];
                students[i] = students[k];
                students[k] = buffer;
            }
        }
    }

    printf("按照成绩排序:\n");
    for (i = 0; i < j; i++)
    {
        printf("No.%d:", i + 1);
        printf("%s ", students[i].ID);
        printf("%s ", students[i].name);
        printf("%d ", students[i].age);
        printf("%lf\n", students[i].score);
    }
}
void ReadOut(Student students[], int j)
{

    FILE *fp;
    char ID[20];
    char name[30];
    int age, *a;
    double score, *s;
    int i;
    a = &age;
    s = &score;

    fp = fopen("D:/Info.dat", "rb");

    if (!fp)
    {
        printf("file error\n"); //检查文件指针
        exit(1);
    }

    for (i = 0; i < j; i++)
    {

        printf("Student No%d:", (i + 1));

        fread(ID, 1, strlen(students[i].ID) + 1, fp);
        printf("%s,", ID);

        fread(name, 1, strlen(students[i].name) + 1, fp);
        printf("%s,", name);

        fread(a, 1, sizeof(int), fp);
        printf("%d,", age);

        fread(s, 1, sizeof(double), fp);
        printf("%lf\n", score);
    }

    fclose(fp);

    Sort(students, j);
}

int main()
{

    int i = 0;
    char a = 'a';
    Student students[40];

    printf("按#键结束输入\n");
    while (a != '#' && i < 40)
    {

        scanf("%s", &students[i].ID);
        scanf("%s", &students[i].name);
        scanf("%d", &students[i].age);
        scanf("%lf", &students[i].score);

        a = getchar();
        i++;
    }
    CreateFile(students, i);
    ReadOut(students, i);

    system("pause");
    return 0;
}