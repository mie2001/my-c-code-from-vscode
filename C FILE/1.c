#include <stdio.h>
#include <stdlib.h>
//1.判断质数(素数)问题，质数：指在大于1的自然数之中，除了1和它本身之外，不会再有其它因数的自然数
int prime(int n)
{
    int i;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0; //不是素数
        }
    }
    return 1; //是素数
}
int main()
{
    int n;
    scanf("%d", &n);
    if (prime(n) == 1)
    {
        printf("%d是素数\n", n);
    }
    else
    {
        printf("%d不是素数\n", n);
    }
    system("pause");
    return 0;
}