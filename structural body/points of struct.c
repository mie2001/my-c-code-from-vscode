#include <stdio.h>
#include <stdlib.h>
int main()
{
    //�����﷨   �ṹ�������� *ָ��������
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
    //! ע��(p+1)->x��++ptr->m������ǰ����ָ����һ����Ա������û��
    printf("%d\n", student1.ID);
    system("pause");
}