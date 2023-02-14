#include <stdio.h>
#include <stdlib.h>

void print_int(int);

int main()
{
    void(*f_ptr)(int);

    f_ptr = &print_int;

    /* call print_int */
    f_ptr(2);
    /* another way to call print_int */
    (*f_ptr)(2);

    return 0;
}

/* print an integer */
void print_int(int x)
{
    printf("%d\n", x);
}
