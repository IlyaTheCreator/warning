#include <stdio.h>
#include <stdlib.h>

void Z1(int p)
{
    int *q = &p;
    printf("%d %p %p\n", p, &p, q);
}

int main()
{
    Z1(1);
}
