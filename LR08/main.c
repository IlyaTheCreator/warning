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

void Z2()
{
    struct Person {
       char second_name[50];
       int  height;
    };

    struct Person people[5];
    int i;
    int average_height = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\n  Person[%d] second name  : ", i + 1);
        scanf("%[^\n]%*c", people[i].second_name);
        printf("  Person[%d] height : ", i + 1);
        scanf("%d%*c", &people[i].height);

        average_height += people[i].height;
    }

    average_height = average_height / 5;

    printf("\n Average height: %d \n", average_height);
}

int main()
{
    //Z2();
    //Z1();
    //Z3();
}
