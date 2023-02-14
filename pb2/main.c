#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int square(int a);
int cube(int a);
int fourthpower(int a);

int a,b,x;

int main()
{
    int(*f_ptr[3])(int)={square,cube,fourthpower};

    char menu_options = ' ';
    while(menu_options != 'e')
    {
        printf("a- square\n");
        printf("b- cube\n");
        printf("c- forthpower\n");
        printf("Enter your menu option: \n");
        scanf(" %c", &menu_options);
        printf("Introduceti numarul: \n");
        scanf("%d", &x);

            switch(menu_options)
            {
                case 'a':
                    printf("square = %d\n", (*f_ptr[0])(x));
                    break;

                case 'b':
                    printf("cube = %d\n", (*f_ptr[1])(x));
                    break;

                case 'c':
                     printf("forthpower = %d\n", (*f_ptr[2])(x));
                    break;
                default : printf("Invalid!\n");
            }
    }

    return 0;

}

int square(int a)
{
    return b=a*a;
}

int cube(int a)
{
   return b=a*a*a;
}

int fourthpower(int a)
{
   return b=a*a*a*a;
}
