#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TestFanc.h"
#pragma once

#define PUSHKIN printf("Если жизнь тебя обманит, \n\
Не печалься, не сердись!\n")
#define DIS(A, B, C) ((B)*(B)-4*(A)*(C))
#define KWADR(A,B,C) (DIS(A,B,C) < 0)? printf("Не решаемо\n") : printf("%f - %f\n", (-B + sqrt(DIS(A,B,C)))/2, (-B + sqrt(DIS(A,B,C)))/2)

int main()
{
    setlocale(LC_ALL, "Rus");
    PUSHKIN;

    printf("%d\n", DIS(4, 5, 6));

    KWADR(4, 5, 6);
    KWADR(3, 7, -10);

    printf("Строка: %d\n", __LINE__);
    printf("Время: %s\n",__TIME__);
    printf("Дата: %s\n", __DATE__);

    printf("%d", AnyFan(3, 5));
    return 0;
}
