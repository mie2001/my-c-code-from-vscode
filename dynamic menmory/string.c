//!非常重要实用
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int strLen = 5;                                    //定义标准长度为5
    char ch;                                           //这是一个储存字符的数组
    char *str = (char *)malloc(sizeof(char) * strLen); //语法 字符指针 强制类型转换 malloc 5个字符数组储存所需要的空间
    //printf("str_pre=:%d\n",str);//查看指针str地址
    printf("%d\n", sizeof(str));
    int count = 0; //计数器统计字符长度
    printf("Please input a string: \n");
    do
    {
        ch = getchar(); //一次接受用户输入的字符
        count++;
        if (count >= strLen) //当输入了第5个字符的时候
        {                    //每次重新分配加一的内存空间；
            str = (char *)realloc(str, sizeof(char) * (++strLen));
        }
        str[count - 1] = ch;
    } while (ch != '\n'); //最后一个给了'0'
    //printf("str_lat=:%d\n",str);//查看使用realloc后指针str地址
    printf("count=%d\n", count);
    str[count] = '\0'; //字符数组最后不是‘0’的话会出错
    puts(str);
    system("pause");
    return 0;
    //有bug，当输入小于5的字符时count是5
}