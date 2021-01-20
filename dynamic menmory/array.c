#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("请输入数组的长度:\n");
    int a;
    scanf("%d", &a);
    int *p = (int *)malloc(a * sizeof(int));
    //这里必须养成加上强制类型转换的良好习惯，尽管c语言会自动类型转换
    //切记malloc和free成双成对
    //切记一定要判断是否申请内存成功
    if (NULL == p)
    {
        exit(1;) //暂时不是很理解这样做的意义
    }
    int i;
    srand(time(NULL));
    printf("未手动释放内存时:\n");
    for (i = 0; i < a; i++)
    {
        p[i] = rand() % 100;
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    printf("手动释放内存后:\n");
    for (i = 0; i < a; i++)
    {
        printf("%d ", p[i]);
    }
    system("pause");
    return 0;
}