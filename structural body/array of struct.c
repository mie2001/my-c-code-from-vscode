#include <stdio.h>
#include <stdlib.h>
int main()
{
    typedef struct
    {
        int ID;
        char name[20];
    } student;
    student s;
    student array[3] = {{200011321}, {200011322}, {200011323}};
    printf("%d\n%d\n%d\n", array[0].ID, array[1].ID, array[2].ID);
    system("pause");
    return 0;
}