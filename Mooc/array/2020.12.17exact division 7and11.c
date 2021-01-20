#include <stdio.h>
#include <stdlib.h>
int fun(int a, int b, int r[]);
int main()
{
    int r[1000];
    int a;
    int b;
    int i;
    int j;
    do
    {
        scanf("%d %d", &a, &b);
    } while (a >= b);
    j = fun(a, b, r);
    for (i = 0; i < j; i++)
    {
        printf("%d ", r[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
int fun(int a, int b, int r[])
{ //a~b之内能被7或者11整除，但不能同时被7和11整除
    int i = 0;
    int cont = 0;
    for (; a <= b; a++)
    {
        if (!(a % 7 == 0 && a % 11 == 0) && (a % 7 == 0 || a % 11 == 0))
        {
            for (; i < 1000;)
            {
                r[i] = a;
                break;
            }
            cont++;
            i++;
        }
    }
    return cont;
}