#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 0.0, b = 0.0, sum = 0.0, diff = 0.0, mult = 0.0, div = 0.0;
    char menu_options = {'0'};

    do
    {
        printf(" \tMENU \n");
        printf(" a. Addition(+) \n");
        printf(" b. Substraction(-) \n");
        printf(" c. Multiplication(*) \n");
        printf(" d. Division(/) \n");
        printf(" q. Exit \n");

        printf("Enter your menu option: \n");
        scanf(" %c", &menu_options);

            switch(menu_options)
            {
                case 'a':
                    printf("Enter the real number 1: \n");
                    scanf("%lf", &a);
                    printf("Enter the real number 2: \n");
                    scanf("%lf", &b);
                    printf("The sum is: %lf\n", a+b);
                    break;

                case 'b':
                    printf("Enter the real number 1: \n");
                    scanf("%lf", &a);
                    printf("Enter the real number 2: \n");
                    scanf("%lf", &b);
                    printf("The substraction is: %lf\n", a-b);
                    break;

                case 'c':
                    printf("Enter the real number 1: \n");
                    scanf("%lf", &a);
                    printf("Enter the real number 2: \n");
                    scanf("%lf", &b);
                    printf("The multiplication is: %lf\n", a*b);
                    break;

                case 'd':
                    printf("Enter the real number 1: \n");
                    scanf("%lf", &a);
                    printf("Enter the real number 2: \n");
                    scanf("%lf", &b);
                    printf("The division is: %lf\n", a/b);
                    break;

                case 'q':
                    printf("Thank you for using my code!\n");
                    break;

                default : printf("Invalid!\n");
            }
    } while(menu_options != 'q');

    return 0;
}
