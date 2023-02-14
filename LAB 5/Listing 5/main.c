#include <stdio.h>
#include <stdlib.h>

void function1(int a);
void function2(int b);
void function3(int c);

int main()
{
    /* define and initialize an array of 3 pointers to functions that each
       takes an integer argument and returns void */
    void(*f_ptr[3])(int) = {function1, function2, function3};
    int choice = 0; /*variable to hold user's choice */

    printf("Enter a number between 1 and 3, 4 to end: ");
    scanf("%d", &choice);

    while("choice >= 1 && choice < 4")
    {
        /* invoke function at location choice in array f_ptr and pass
           choice as an argument */
        (*f_ptr[choice - 1])(choice);
        printf("Enter a number between 1 and 3, 4 to end: ");
        scanf("%d", &choice);
    }
    printf( "Program execution completed.\n" );

    return 0;
}

void function1(int x)
{
    printf("You entered %d -- Function1 was called.\n", x);
}

void function2(int y)
{
    printf("You entered %d -- Function2 was called.\n", y);
}

void function3(int z)
{
    printf("You entered %d -- Function3 was called.\n", z);
}
