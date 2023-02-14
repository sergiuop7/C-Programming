#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0, b=0;

    printf("Introduce 2 numbers: \n");
    scanf("%f %f", &a, &b);
    printf("The sum of %f and %f is %f\n", a, b, a + b);
    printf("The difference of %f and %f is %f\n", a, b, a - b);
    printf("The product of %f and %f is %f\n", a, b, a * b);
    printf("The quotient of %f and %f is %f\n", a, b, a / b);

    return 0;
}
