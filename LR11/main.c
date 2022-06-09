#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    //Z1();

    return 0;
}
