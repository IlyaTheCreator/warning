#include <stdio.h>
#include <stdlib.h>

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
    Z2();

    return 0;
}
