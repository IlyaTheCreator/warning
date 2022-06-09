#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

struct Product
{
    char name[100];
    int count;
    float price;
}product;

void Z1()
{
    scanf("%s", product.name);
    scanf("%i", &product.count);
    scanf("%f", &product.price);
    printf("%s %f", product.name, product.count * product.price);
}

void Z3()
{
    struct tm * timeinfo;
    time_t rawtime;
    time( &rawtime );
    timeinfo = localtime( &rawtime );
    printf("%s", asctime(timeinfo));
}

int main()
{
    //Z1();
    //Z3();
}
