#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.14159265;

    printf("pi rounded to 2 digits : %.2f\n", pi);
    printf("pi rounded to 0 digits : %.f\n", pi);
    printf("pi rounded to 4 digits : %.4f\n", pi);
    printf("pi justified on 10 columns and rounded to 2 digits : %10.2f\n", pi);
    printf("pi in exponential form : %e\n", pi);
    return 0;

}
