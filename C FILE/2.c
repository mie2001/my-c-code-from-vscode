#include <stdio.h>

#include <math.h>

int main()

{

    int a, b, c, count = 0;

    printf("150以内的勾股数有:\n");

    printf("   a   b   c\n");

    /*求150以内勾股数*/

    for (a = 1; a <= 50; a++)

        for (b = a + 1; b <= 50; b++)

        {
            //!强制类型转换
            c = (int)sqrt(a * a + b * b); /*求c值*/

            if (c * c == a * a + b * b && a + b > c && a + c > b && b + c > a && c <= 50) /*判断c的平方是否等于a2+b2*/

            {

                printf("%4d %4d %4d\n", a, b, c);
            }
        }
    system("pause");
    return 0;
}