//��֤�û���������ڸ�ʽ�Ƿ���ȷ
#include <stdio.h>
#include <stdlib.h>
typedef struct Date
{
    int year;
    int month;
    int day;
} Date;
Date date;                 //!����һ���ṹ�����
int checkDate(Date *date); //!��������Ƿ���Ч
int main()
{
    printf("������һ������\n");
    scanf("%d-%d-%d", &date.year, &date.month, &date.day);
    while (!checkDate(&date))
    {
        printf("��������ڸ�ʽ����ȷ������������\n");
        scanf("%d-%d-%d", &date.year, &date.month, &date.day);
    } //!ʵ��ֱ������������ȷ������Ϊֹ
    if (checkDate(&date))
    {
        printf("��������ڸ�ʽ��ȷ\n");
    }
    system("pause");
    return 0;
}
int checkDate(Date *date) //ָ��Ҫ�������->
{
    //������ȷ�����ڸ�ʽ ע�������������
    if (date->year >= 0 && 1 <= date->month <= 12) //����������ݺ��·ݷ��Ϲ淶
    {
        if (date->month == 2) //����Ƕ���,�ж�����������Ƿ���ȷ
        {
            //��ƽ��28�� ����29��
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
        if (date->day == 30) //���������30�죬�ж�������·��Ƿ���ȷ
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
        if (date->day == 31) //���������31�죬�ж�������·��Ƿ���ȷ
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
        return 0; //!����ֻҪ����return�ͽ�����
    }
}
