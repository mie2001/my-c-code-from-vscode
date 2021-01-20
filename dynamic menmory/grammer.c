//暂时理解动态内存的作用是为了解决输入问题
#include <stdio.h>
#include <stdlib.h>
int main()
{   //?情景：一开始只定义了长度为5的整形数组，但是用户想要输入10个数，这时候就要用到动态内存分配扩大数组的长度
    //!关于malloc的用法,注意malloc和calloc用法一样，唯一区别是语法和初始值，calloc会全部初始化为0
    /*
    char *p = NULL;
    printf("%d\n", sizeof(p));//一个char指针的占8个字节？
    printf("%d\n", p);
    p = (char *)malloc(100 * sizeof(char)); //p指向了一个长度为100字符数组吗,用malloc分配了储存空间的指针可以当数组使用
   
    if (NULL == p)
    {
        exit(1); //几个意思啊？
    }
    gets(p); //gets会自动换行
    puts(p); //puts也会自动换行
    printf("%d\n", sizeof(p));
    printf("%d\n", p);
    free(p);  //释放p申请的动态内存空间
    p = NULL; //非常重要，防止p变成野指针,空指针的地址为0
    puts(p);
    printf("%d\n", p);
    system("pause");
    return 0;
    */
    //!关于realloc的用法,(数据类型)realloc(要改变内存大小的指针名字，新的大小),若新的大小小于原来的大小，原来的数据可能丢失或者被覆盖
    int i;
    int a;
    srand(time(NULL));
    printf("请输入数组的长度:\n");
    scanf("%d", &a);
    int *p = (int *)malloc(a * sizeof(int));
    for (i = 0; i < a; i++)
    {
        scanf("%d", &p[i]);
    }
    for (i = 0; i < a; i++)
    {
        p[i] = rand() % 100;
    }
}