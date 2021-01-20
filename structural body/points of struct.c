#include <stdio.h>
#include <stdlib.h>
int main()
{
    //基本语法   结构题类型名 *指针类型名
    typedef struct student
    {
        int ID;
        char name[20];
    } S;
    //int a,*p=&a;
    //p=&a
    //*p=a
    S student1;
    student1.ID = 20011321;
    //! 注意(p+1)->x和++ptr->m的区别，前者先指向下一个成员，后者没有
    printf("%d\n", student1.ID);
    system("pause");
}