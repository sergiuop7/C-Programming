#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, even_numbers = 0, odd_numbers = 0, s1 = 0, s2 = 0;
    float avg1 = 0.0, avg2= 0.0;
    do
    {
        printf("Enter integer number: ");
        scanf("%d", &n);
        if(n % 2 == 0)
            {
                s1 = s1 + n;
                even_numbers++;
            }
        else
            {
                s2 = s2 + n;
                odd_numbers++;
            }
    } while(n != 0);
    printf("There are %d even numbers.\n", even_numbers-1);
    printf("There are %d odd numbers.\n", odd_numbers);
    if(even_numbers-1 != 0)
    {
        printf("There average of even numbers is %.2f.\n", avg1 = (float)s1 / even_numbers-1);
    }
    else printf("There are no even numbers.\n");
    if(odd_numbers != 0)
    {
        printf("There average of odd numbers is %.2f.\n", avg2 = (float)s2 / odd_numbers);
    }
    else printf("There are no odd numbers.");
    return 0;
}
