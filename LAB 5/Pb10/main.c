#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double var = 0.0;

    scanf("%lf", &var);
    if(var >= 0)
        printf("Square root of %lf is %lf.\n", var, sqrt(var));
    if(var > 0)
        printf("Log of %lf is %lf.\n", var, log(var));

    printf("Arctangent of %lf is %lf.\n", var, atan(var));
    printf("Absolute value of %lf is %lf.\n", var, fabs(var));
    printf("Nearest integer less then %lf is %lf.\n", var, floor(var));

    return 0;
}
