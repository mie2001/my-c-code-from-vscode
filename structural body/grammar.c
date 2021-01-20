#include <stdio.h>
#include <stdlib.h>
//基本语法
struct date
{
    int year;
    int month;
    int day;
};
//typedef 为结构体起别名
/*/
方法一：struct student{
    int ID;
    char name[20];
    char sex;double score;
    
}
typedef student Stu*/
//方法三
typedef struct
{
    int ID;
    char name[20];
    char sex;
    double score;
} Date;
//结构体变量

//结构体变量的初始化赋值
//方法一，定义时候直接赋值

int main()
{ //结构体变量.
    Date day1, day2;
    day1.ID = 20011321;
    day2.ID = 20011322;
    printf("%d\n%d\n", day1.ID, day2.ID);
    system("pause");
}