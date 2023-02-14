#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

int main()
{
    double a = 0.0, radians = 0.0, rest1 = 0.0, rest2 = 0.0;
    int degrees = 0, minutes = 0, seconds = 0;
    unsigned symbol = 248;

    printf("Enter the radians (Real number between 0 and 2*PI):");
    scanf("%lf", &radians);

    a = radians * (180 / PI);
    degrees = (int)a;

    rest1 = a - degrees;
    minutes = (int)rest1 * 60.0;

    rest2 = rest1 - minutes / 60.0;
    seconds = rest2 * 3600.0;

    printf("In degrees, minutes and seconds: %d%c%d%\'%.2f\n", degrees, symbol, minutes, seconds);

    return 0;
}
