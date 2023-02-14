#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, i = 0, mask = 1 << 31;
    printf("Enter a number: ");
    scanf("%u", &n);

    for(i = 1; i <= 32; i++)
    {   putchar(n & mask ? '1' : '0');
        mask >>= 1;
        if(i % 8 == 0)
        {
            putchar (' ');
        }
    }

    return 0;
}
