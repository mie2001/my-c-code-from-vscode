#include <stdio.h>
#include <stdlib.h>
//�����﷨
struct date
{
    int year;
    int month;
    int day;
};
//typedef Ϊ�ṹ�������
/*/
����һ��struct student{
    int ID;
    char name[20];
    char sex;double score;
    
}
typedef student Stu*/
//������
typedef struct
{
    int ID;
    char name[20];
    char sex;
    double score;
} Date;
//�ṹ�����

//�ṹ������ĳ�ʼ����ֵ
//����һ������ʱ��ֱ�Ӹ�ֵ

int main()
{ //�ṹ�����.
    Date day1, day2;
    day1.ID = 20011321;
    day2.ID = 20011322;
    printf("%d\n%d\n", day1.ID, day2.ID);
    system("pause");
}