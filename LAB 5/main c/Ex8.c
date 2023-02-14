#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLUMNS 12

int func(int year, int month, int day, const int daysofmonth[][COLUMNS], int *day1);

int main()
{
    int day = 0, month = 0, year = 0, day1 = 0, dayofyear = 0;
    int daysofmonth[ROWS][COLUMNS] = {
                                        {31, 28, 31, 30, 31, 30, 31, 31 , 30, 31, 30, 31},
                                        {31, 29, 31, 30, 31, 30, 31, 31 , 30, 31, 30, 31}
                                        };
    printf("Enter day, month, year: ");
    scanf("%d %d %d", &day, &month, &year);

    dayofyear = (func(year, month, day, daysofmonth, &day1));
    printf("%d %d", dayofyear, day1);
    return 0;
}

int func(int year, int month, int day, const int daysofmonth[][COLUMNS], int *day1)
{
    int ok = ((year % 4 ==0 && year % 100 != 0) || year % 400 == 0);
    for(int i = 0; i < month - 1; i++)
    {
        day = day + daysofmonth[ok][i];
    }
    if(ok)
        *day1 = 366 - day;
    else
        *day1 = 365 - day;
    return day;
}
