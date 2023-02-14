#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n = 0, i = 0, j = 0, a[100], aux = 0;
    printf("Introduce the number of elements of the array:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("number[%d]=", i);
        scanf("%d", &a[i]);
    }
    for(i = 1; i <= n; i++)
     for(j = i + 1; j <= n; j++)
        if(a[i] > a[j])
     {
         aux = a[i];
         a[i] = a[j];
         a[j] = aux;
     }
     for(i = 1; i <= n; i++)
     {
         printf("%d ", a[i]);
     }
     return 0;
}
