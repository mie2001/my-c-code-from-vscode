//拟实现交换的四种方法
/*void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}*/
void swap2(int *a, int b)
{

    int temp = *a;
    *a = b;
    b = temp;
}
void swap3(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap4(int *a, int *b)

{
    int *temp = a;
    a = b;
    b = temp;
}
int main()
{
    int *x = 1;
    int y = 2;
    swap1(x, y);
    printf("x=%d,y=%d", x, y);
    swap2(x, y);
    printf("x=%d,y=%d", x, y);
    swap3(x, y);
    printf("x=%d,y=%d", x, y);
    swap4(x, y);
    printf("x=%d,y=%d", x, y);
    return 0;
}