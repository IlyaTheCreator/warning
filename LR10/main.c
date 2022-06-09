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

int main()
{
    // Z1();
    Z2();

    return 0;
}
