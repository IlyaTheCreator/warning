#include <stdio.h>
#include <stdlib.h>

void Z1()
{
    char contents[1000];

    FILE * fp;
    fp = fopen("./file1.txt", "w");

    if(fp == NULL)
    {
        printf("Error!\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the contents of file: \n");
    fgets(contents, 1000, stdin);

    fputs(contents, fp);

    fclose(fp);
}

void Z2()
{
    char ch;
    FILE *file;
    int count = 0;

    file = fopen("./file2.txt","r");

    while((ch = fgetc(file)) != EOF){
        if(ch ==' ' || ch == '\n')
            count++;
    }

    printf("Number of words: %d", count);
    fclose(file);
}

void Z3()
{
    FILE *fp;

    fp = fopen("./file3.txt","w");
    fputs(__DATE__, fp);
    fclose(fp);
}

void Z4()
{
    FILE *fp;
    int i;

    fp = fopen("./file4.txt","w");

    for(i = 0; i < 100; i++)
    {
        fprintf(fp, " %d ", rand() % 101 + 1);
    }

    fclose(fp);
}

int main()
{
    // Z1();
    // Z2();
    // Z3();
    Z4();

    return 0;
}
