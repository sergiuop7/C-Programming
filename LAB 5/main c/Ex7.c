#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10

int perfect_square(int);

int main()
{
    int array[SIZE]={ 4, 8 ,5, 16, 31, 81, 57, 25, 90, 64}, result[SIZE], k=0;
    for(int i = 0; i < SIZE ; i++)
    {
        if(perfect_square(array[i]))
            result[k++] = array[i];
    }
    for(int i = 0; i < k; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

int perfect_square(int val)
{
    if(sqrt((double)val) == (int)sqrt((double)val))
        return 1;
    return 0;

}
