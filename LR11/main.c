#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Z1()
{
    FILE *fp;
    int i;

    fp = fopen("./file1.txt","w");

    for (i = 0; i < 20; i++)
    {
        fprintf(fp, " not\n ");
    }

    fclose(fp);
}

Z2()
{
    struct Participant
    {
        char nick[50];
        int score;
    };

    FILE *fp;
    struct Participant participants[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        struct Participant participant;

        printf("\n  Participant[%d] nick  : ", i + 1);
        scanf("%[^\n]%*c", participants[i].nick);

        if (strlen(participants[i].nick) > 8)
        {
            printf("\n Participant's nick should have less than 8 characters \n");
            exit(0);
        }

        printf("  Participant[%d] score : ", i + 1);
        scanf("%d%*c", &participants[i].score);
    }

    fp = fopen("./file2.txt", "w");

    for (i = 0; i < 6; i++)
    {
        fprintf(fp, "Person %d nick: %s \n", i + 1, participants[i].nick);
        fprintf(fp, "Person %d score: %d \n \n", i + 1, participants[i].score);
    }

    fclose(fp);
}

int main()
{
    //Z1();
    Z2();

    return 0;
}
