#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year = 0;
    printf("Introduce a year:");
    scanf("%d", &year);

    (( year % 4 == 0 && year % 100 !=0) || year % 400 == 0) ? printf("This year is leap") : printf("This year is not leap");

    return 0;
}
