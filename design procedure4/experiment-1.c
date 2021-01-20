//验证用户输入的日期格式是否正确
#include <stdio.h>
#include <stdlib.h>
typedef struct Date
{
    int year;
    int month;
    int day;
} Date;
Date date;                 //!定义一个结构体变量
int checkDate(Date *date); //!检查日期是否有效
int main()
{
    printf("请输入一个日期\n");
    scanf("%d-%d-%d", &date.year, &date.month, &date.day);
    while (!checkDate(&date))
    {
        printf("输入的日期格式不正确，请重新输入\n");
        scanf("%d-%d-%d", &date.year, &date.month, &date.day);
    } //!实现直到重新输入正确的日期为止
    if (checkDate(&date))
    {
        printf("输入的日期格式正确\n");
    }
    system("pause");
    return 0;
}
int checkDate(Date *date) //指针要用运算符->
{
    //定义正确的日期格式 注意特殊情况二月
    if (date->year >= 0 && 1 <= date->month <= 12) //如果输入的年份和月份符合规范
    {
        if (date->month == 2) //如果是二月,判断输入的天数是否正确
        {
            //分平年28天 闰年29天
            if (date->year % 4 == 0 && date->year % 100 != 0 || date->year % 400 == 0)
            {
                if (date->day <= 29)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else if (date->day <= 28)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if (date->day == 30) //如果天数是30天，判断输入的月份是否正确
        {
            switch (date->month)
            {
            case 2:
                return 1;
                break;
            case 4:
                return 1;
                break;
            case 6:
                return 1;
                break;
            case 9:
                return 1;
                break;
            case 11:
                return 1;
                break;
            default:
                return 0;
                break;
            }
        }
        if (date->day == 31) //如果天数是31天，判断输入的月份是否正确
        {
            switch (date->month)
            {
            case 1:
                return 1;
                break;
            case 3:
                return 1;
                break;
            case 5:
                return 1;
                break;
            case 7:
                return 1;
                break;
            case 8:
                return 1;
                break;
            case 10:
                return 1;
                break;
            case 12:
                return 1;
                break;
            default:
                return 0;
                break;
            }
        }
        if (date->day > 31)
        {
            return 0;
        }
    }
    else
    {
        return 0; //!函数只要遇到return就结束了
    }
}
