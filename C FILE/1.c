#include <stdio.h>
#include <stdlib.h>
//1.�ж�����(����)���⣬������ָ�ڴ���1����Ȼ��֮�У�����1��������֮�⣬��������������������Ȼ��
int prime(int n)
{
    int i;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0; //��������
        }
    }
    return 1; //������
}
int main()
{
    int n;
    scanf("%d", &n);
    if (prime(n) == 1)
    {
        printf("%d������\n", n);
    }
    else
    {
        printf("%d��������\n", n);
    }
    system("pause");
    return 0;
}