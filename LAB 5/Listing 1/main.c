#include <stdio.h>
#include <stdlib.h>

double cube_value(double); //cube_value function prototype

int main()
{
    double number = 5.0;

    printf("The original value of number is %.2f.\n", number);
    number = cube_value(number); /* pass number by value to cube_value */
    printf("The new valeu of number is %.2f.\n", number);

    return 0;
}

/*calculate and return cube of a double */
double cube_value(double number)
{
    return pow(number, 3);
}
