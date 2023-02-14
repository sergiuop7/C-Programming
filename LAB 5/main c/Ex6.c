#include <stdio.h>
#include <stdlib.h>

#define s 10

int min(int size, int a[]);
int max(int size, int *a);

int main()
{
    int a[10] = {0}, i;
    printf("Enter an array of %d numbers: \n", s);
    for(i = 0; i < s; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("The maximum value is %d\n", max(s, a));
    printf("The minimum value is %d\n", min(s, a));

    return 0;
}

int min(int size, int a[])
{
    int minim = a[0];
    for(int i = 0; i < size; i++)
    {
        if(a[i] < minim)
            minim = a[i];
    }
    return minim;

}

int max(int size, int *a)
{
    int maxim = *(a+0);
    for(int i = 0; i < size; i++)
    {
        if(*(a+i) > maxim)
            maxim = *(a+i);
    }
    return maxim;
}
