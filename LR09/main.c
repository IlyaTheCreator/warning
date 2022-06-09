#include <stdio.h>
#include <stdlib.h>

void Dv(unsigned char per)
{
    printf("%d", per &0x80 ? 1 : 0);
    printf("%d", per &0x40 ? 1 : 0);
    printf("%d", per &0x20 ? 1 : 0);
    printf("%d", per &0x10 ? 1 : 0);
    printf("%d", per &0x08 ? 1 : 0);
    printf("%d", per &0x04 ? 1 : 0);
    printf("%d", per &0x02 ? 1 : 0);
    printf("%d\n", per &0x01 ? 1 : 0);
}

void DvShort(unsigned char per)
{
    printf("%d", per &0x8000 ? 1 : 0);
    printf("%d", per &0x4000 ? 1 : 0);
    printf("%d", per &0x2000 ? 1 : 0);
    printf("%d", per &0x1000 ? 1 : 0);
    printf("%d", per &0x800 ? 1 : 0);
    printf("%d", per &0x400 ? 1 : 0);
    printf("%d", per &0x200 ? 1 : 0);
    printf("%d", per &0x100 ? 1 : 0);
    printf("%d", per &0x80 ? 1 : 0);
    printf("%d", per &0x40 ? 1 : 0);
    printf("%d", per &0x20 ? 1 : 0);
    printf("%d", per &0x10 ? 1 : 0);
    printf("%d", per &0x08 ? 1 : 0);
    printf("%d", per &0x04 ? 1 : 0);
    printf("%d", per &0x02 ? 1 : 0);
    printf("%d\n", per &0x01 ? 1 : 0);
}

void Z1()
{
    unsigned char ch = 255;
    Dv(ch);
    for(int i = 7; i > 3; i--)
    {
        ch &= ~(ch << i);
    }
    Dv(ch);
}

void Z2()
{
    unsigned char ch = 1;
    Dv(ch);
    for(int i = 8; i > 3; i--)
    {
        ch |= (1 << i);
    }
    Dv(ch);
}

void Z3()
{
    unsigned short int i = 1246;
    DvShort(i);
}

int main()
{
    //Z1();
    //Z2();
    Z3();
}
