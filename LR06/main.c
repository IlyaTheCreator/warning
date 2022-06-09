#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NI printf("¬ведите значение:");
#define S3(x) x + 3
#define SUMSQ(x, y) x * x + y * y
#define OPTION 1
#define SUMORSLG(x, y) OPTION ? x + y : x * y

void Z1()
{
    system("chcp 1251");
    NI;
}

void Z2(int a)
{
    printf("%d", S3(a));
}

int Z3(int a, int b, int c)
{
    if ((a*a == SUMSQ(b, c)) | (b*b == SUMSQ(a, c)) | (c*c == SUMSQ(a, b)))
        return 1;
    return 0;
}

int main()
{
    printf("%s %s\n", __TIME__, __DATE__);
    //Z1();
    //Z2(5);
    //printf("%d", Z3(3, 5, 4));

    //printf("%d", SUMORSLG(4, 6));

    //printf("%s %s %d\n", __TIME__, __DATE__, __LINE__);

    return 0;
}
