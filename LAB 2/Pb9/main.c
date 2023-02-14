#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number = 0, n = 0, new_number = 0;

    printf("Enter an unsigned integer number:\n");
    scanf("%u", &number);

    printf("Choose the n th bit to set (from 0 to 31):\n");
    scanf("%u", &n);
    new_number = (1 << n) | number;
    printf("%u\n", new_number);

    return 0;
}
