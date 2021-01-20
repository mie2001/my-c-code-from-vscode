//利用结构体实现学生平均成绩的计算和输出
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char ID[10];
    char name[10];
    int math;
    int physics;
    int english;
    int score;
} student;
void input(student s[], int n);
int average(student s[], int n);
int main()
{

    int n;
    scanf("%d", &n);
    student s[10];
    input(s, n);
    average(s, n);
    system("pause");
    return 0;
}
void input(student s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d", &s[i].ID, &s[i].name, &s[i].math, &s[i].physics, &s[i].english);
    }
}
int average(student s[], int n)
{
    int a = 0;
    int i;
    for (i = 0; i < n; i++, a = 0)
    {
        a = (s[i].math + s[i].physics + s[i].english) / 3;
        printf("The average score of the %dth student is %d.\n", i, a);
    }
}
