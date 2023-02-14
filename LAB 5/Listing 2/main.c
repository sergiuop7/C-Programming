#include <stdio.h>
#include <stdlib.h>

void cube_reference(double*); //cube_reference function prototype
int main()
{
    double number = 5.0;

    printf("The original value of number is %.2f.\n", number);
    cube_reference(&number); /* pass number by value using pointer to cube_reference */
    printf("The new value of number is %.2f.\n", number);

    return 0;
}

/*calculate and return cube of a double */
void cube_reference(double *number_ptr)
{
    *number_ptr = pow(*number_ptr, 3);
}
