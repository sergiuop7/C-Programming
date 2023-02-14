#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 0.0, f = 0.0;
    printf("Enter an real number:");
    scanf("%f", &n);
    if (n < -1)
    {
        printf("\n f(n) = %.2f", n*n+4*n+8);
    }
    else if(n = -1)
    {
        printf("\n f(n) = %.2f", 0);
    }
    else
    {
        printf("\n f(n) = %.2f", n*n-5*n+1);
    }
    return 0;
}
