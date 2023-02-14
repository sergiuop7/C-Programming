#include <stdio.h>
#include <stdlib.h>

int i;
int main()
{
    for(i=0; i<=15; i++)
    {
        printf("Decimal value=%d \t Octal value=%#o \t Hexadecimal value=%#X\t\n ", i, i, i);
    }
    return 0;
}
