#include <stdio.h>

#include <math.h>

int main()

{

    int a, b, c, count = 0;

    printf("150���ڵĹ�������:\n");

    printf("   a   b   c\n");

    /*��150���ڹ�����*/

    for (a = 1; a <= 50; a++)

        for (b = a + 1; b <= 50; b++)

        {
            //!ǿ������ת��
            c = (int)sqrt(a * a + b * b); /*��cֵ*/

            if (c * c == a * a + b * b && a + b > c && a + c > b && b + c > a && c <= 50) /*�ж�c��ƽ���Ƿ����a2+b2*/

            {

                printf("%4d %4d %4d\n", a, b, c);
            }
        }
    system("pause");
    return 0;
}