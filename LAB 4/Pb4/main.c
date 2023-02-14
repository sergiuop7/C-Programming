#include <stdio.h>
#include <stdlib.h>

int main()
{
    char initial[20], final_s[20];
    char *ptr_i = initial, *ptr_f = final_s;
    int i = 0;

    gets(initial);

    while(*ptr_i != '\0')
    {
        i++;
        ptr_i++;

    }
    while(i >= 0)
    {
        *(ptr_f++) = *(--ptr_i);
        i--;
    }
    *ptr_f = '\0';
    printf("%s", final_s);
    return 0;
}
