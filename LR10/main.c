#include <stdio.h>
#include <stdlib.h>

void Z1()
{
char contents[1000];

 //Opening the file
 FILE * fp;
 fp = fopen("./file1.txt", "w"); //"w" = write

 //If there is an error
 if(fp == NULL)
{
    //Exit
    printf("Error!\n");
    exit(EXIT_FAILURE);
}

//This part require your input
printf("Enter the contents of file: \n");
fgets(contents, 1000, stdin);


//Write your input in file
fputs(contents, fp);

//Close the file
fclose(fp);
}

int main()
{
    Z1();

    return 0;
}
