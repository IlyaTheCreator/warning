#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void Z1_1()
{
    system("chcp 1251");
    for(int i = 224; i < 256; i ++)
        printf("%c - %i\n", i, i);
}

void Z1_2()
{
    system("chcp 866");
    for(int i = 160; i < 176; i ++)
        printf("%c - %i\n", i, i);
    for(int i = 224; i < 240; i ++)
        printf("%c - %i\n", i, i);
}

void Z3()
{
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[1000];
    scanf("%s %s %s", str1, str2, str3);
    str1[0] = toupper(str1[0]);
    str2[0] = toupper(str2[0]);
    str3[0] = toupper(str3[0]);
    strcat(str4, str1);
    strcat(str4, str2);
    strcat(str4, str3);
    printf("%s", str4);
}

int main()
{
    //Z1_1();
    //Z1_2();
    //Z3();
}
