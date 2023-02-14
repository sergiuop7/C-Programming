#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[4] = {2, 1, 8, 4}, i = 0, j = 0, aux = 0;

    for(i = 0; i < 5; i++)
        for(j = i+1; j < 5; j++)
        {
            if(*(v+i) > *(v+j))
            {
                aux = *(v+i);
                *(v+i) = *(v+j);
                *(v+j) = aux;
            }
        }
    for(i = 0; i < 4; i++)
            printf("%d ", *(v+i));

    return 0;
}
