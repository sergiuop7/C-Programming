#include <stdio.h>
#include <stdlib.h>

int multiple(int a, int b);

int main()
{
    int n1, n2, i;
    for(i=0; i<3; i++)
    {
        printf("Introduceti cele doua numere: \n");
        scanf("%d%d", &n1, &n2);

        if (multiple(n1, n2))
            printf("%d is multiple of %d\n", n2, n1);
        else
            printf("%d is not multiple of %d\n"), n2, n1;
    }

    return 0;
}

int multiple(int a, int b)
{
    if(b % a == 0)
        return 1;
    else
        return 0;

}
