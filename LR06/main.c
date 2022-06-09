#include <stdio.h>
#include <stdlib.h>
#define NI printf("¬ведите значение:");
#define S3(x) x + 3

void Z1()
{
    system("chcp 1251");
    NI;
}

void Z2(int a)
{
    printf("%d", S3(a));
}

int main()
{
    //Z1();
    //Z2(5);
    return 0;
}
