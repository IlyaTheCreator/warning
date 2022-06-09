#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <math.h>

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

void Z2()
{
    int i;
    int length = 8;

    char input[8]  = { 'A', 'C', 'G', 'T', 'C', 'T', 'A', '\0' };
    char output[8]  = { 'A', 'C', 'G', 'T', 'C', 'T', 'A', '\0' };

    for (i = 0; i < length; i++)
    {
        if (output[i] == 'T') {
            output[i] = 'U';
        }
    }

    printf("Input: \n");

    for (i = 0; i < length; i++)
    {
        printf("%c", input[i]);
    }

    printf("\n");

    printf("Output: \n");

    for (i = 0; i < length; i++)
    {
        printf("%c", output[i]);
    }
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

void Z4()
{
    char sentence[50];
    char word[10];
    char *search_result;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    printf("\n Enter a word:");
    scanf(" %[^\n]", word);

    search_result = strstr(sentence, word);

    if (search_result)
    {
        printf("Word found");
    } else
    {
        printf("Word not found");
    }
}

void Z5()
{
    int card_number, i, j, remainder;
    int card_number_arr[20];

    printf("Enter card number: \n");
    scanf("%d", &card_number);

    i = 0;

    while (card_number != 0)
    {
        remainder = card_number % 10;
        card_number_arr[i] = remainder;
        i++;
        card_number = card_number / 10;
    }

    int multiplied_result = 0;

    for (j = i - 1; j > -1; j--)
    {
        if (j % 2 != 0)
        {
            card_number_arr[j] = card_number_arr[j] * 2;

            if (card_number_arr[j] / 10 >= 10 && card_number_arr[j] <= 99)
            {
                card_number_arr[j] = card_number_arr[j] - 9;
            }
        }

        printf("VALUE: %d \n", card_number_arr[j]);

        multiplied_result += card_number_arr[j];
    }

    printf("RESULT: %d \n", multiplied_result);

    if (multiplied_result % 10 == 0)
    {
        printf("\nCard is valid");
    } else
    {
        printf("\nCard is invalid");
    }
}

int main()
{
    //Z1_1();
    //Z1_2();
    //Z2();
    //Z3();
    //Z4();
    // Z5();
}
