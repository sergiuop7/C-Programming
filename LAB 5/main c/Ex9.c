#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.141592

double circumference(int r);
double area(int r);
double volume(int r);

int main()
{
    int r = 0;
    char menu_options = ' ';
    double(*f_ptr[3])(int) = {circumference, area, volume};

    do
    {
        printf("a- circumferinta\n");
        printf("b- aria\n");
        printf("c- volum\n");
        printf("e- exit\n");
        printf("Enter your menu option: \n");
        scanf(" %c", &menu_options);
        printf("Introduceti raza: \n");
    scanf("%d", &r);

            switch(menu_options)
            {
                case 'a':
                    printf("Circumferinta = %.2lf\n", (*f_ptr[0])(r));
                    break;

                case 'b':
                    printf("Aria = %.2lf\n", (*f_ptr[1])(r));
                    break;

                case 'c':
                     printf("Volumul = %.2lf\n", (*f_ptr[2])(r));
                    break;
                default : printf("Invalid!\n");
            }
    } while(menu_options !='e');

    return 0;
}

double circumference(int r)
{
    return 2 * pi * r;
}

double area(int r)
{
    return pi * pow(r, 2);
}

double volume(int r)
{
    return (4 * pi * pow(r, 3)) / 3;
}
