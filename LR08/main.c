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

void Z3()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");
    struct tm *p;
    char m[80] = {0};
    const time_t timer = time(NULL);
    p = localtime(&timer);
    strftime(m, 80, "Сгодня: %d, %B, %A, текущие время %I:%M", p);
    printf("%s", m);
}

void Z4()
{
    setlocale(LC_ALL, "Rus");

    Sleep(7000);
    system("color 85");
    printf("%s", "Пуфф");
}

void Z5()
{
    system("color 02");
    int start = 0;
    while(1){
        system("cls");
        for(int i = 0; i < start; i++){
            printf(" ");
        }
        start = start + 1;
        printf("0");
        if(start >=80) start = 0;
        Sleep(100);
    }
    return 0;
}

void Z6()
{
    setlocale(LC_ALL, "Rus");

    struct Priem
    {
        char fio[20];
        int ekz_1;
        int ekz_2;
        int ekz_3;
    };

    struct Priem priem;

    printf("Введите ФИО.\n");
    scanf("%s", priem.fio);

    printf("\n Введите оценку 1-го экзамена: ");
    scanf("%d%*c", &priem.ekz_1);
    printf("\n Введите оценку 2-го экзамена: ");
    scanf("%d%*c", &priem.ekz_2);
    printf("\n Введите оценку 3-го экзамена: ");
    scanf("%d%*c", &priem.ekz_3);

    int result = priem.ekz_1 + priem.ekz_2 + priem.ekz_3;

    printf("\n Общий балл: %d", result);
}

int main()
{
    //Z2();
    //Z1();
    //Z3();
    //Z4();
    Z5();
    //Z6();
}
