#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch = 0;

    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    puthcar(ch);
    printf(" \nASCII code of %c: %d\n", ch, ch);
    return 0;

}
