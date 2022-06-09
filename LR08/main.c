#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

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
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");
    struct tm *p;
    char m[80] = {0};
    const time_t timer = time(NULL);
    p = localtime(&timer);
    strftime(m, 80, "—годн€: %d, %B, %A, текущие врем€ %I:%M", p);
    printf("%s", m);
}

int main()
{
    //Z1();
    //Z3();
}
