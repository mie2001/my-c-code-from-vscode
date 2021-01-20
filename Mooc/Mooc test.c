#include <stdio.h>

typedef struct Date
{
    int year;
    int month;
    int day;
} Date;

int checkDate(Date date)
{
    if ((date.year) % 4 == 0)
    {
        if (date.month > 0 && date.month < 13)
        {
            if ((date.month) == 2)
            {
                if ((date.day) > 0 && date.day < 30)
                    return 1;
                else
                    return 0;
            }
            if ((date.month) == 1 || (date.month) == 3 || (date.month) == 5 || (date.month) == 7 || (date.month) == 8 || (date.month) == 10 || (date.month) == 12)
            {
                if (date.day > 0 && date.day < 32)
                    return 1;
                else
                    return 0;
            }
            if ((date.month) == 2 || (date.month) == 4 || (date.month) == 6 || (date.month) == 9 || (date.month) == 11)
            {
                if ((date.day) > 0 && date.day < 31)
                    return 1;
                else
                    return 0;
            }
        }
        else
            return 0;
    }

    else
    {
        if (date.month > 0 && date.month < 13)
        {
            if ((date.month) == 2)
            {
                if ((date.day) > 0 && date.day < 29)
                    return 1;
                else
                    return 0;
            }
            if ((date.month) == 1 || (date.month) == 3 || (date.month) == 5 || (date.month) == 7 || (date.month) == 8 || (date.month) == 10 || (date.month) == 12)
            {
                if (date.day > 0 && date.day < 32)
                    return 1;
                else
                    return 0;
            }
            if ((date.month) == 2 || (date.month) == 4 || (date.month) == 6 || (date.month) == 9 || (date.month) == 11)
            {
                if ((date.day) > 0 && date.day < 31)
                    return 1;
                else
                    return 0;
            }
        }
        else
            return 0;
    }
}
int main()
{
    Date date;
    int k = 0;
    do
    {
        printf("请输入日期：\n");
        scanf("%d%d%d", &(date.year), &(date.month), &(date.day));
        k = checkDate(date);
    } while (k == 0);
    if (k == 1)
    {
        printf("输入格式正确\n%d-%d-%d", (date.year), (date.month), (date.day));
    }
    system("pause");
    return 0;
}