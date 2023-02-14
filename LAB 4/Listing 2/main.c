#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};     /* define and initialize array */
    int *array_ptr = array;             /* define and initialize array_ptr to point to array */

    /* int *array_ptr = &array[0]; equivalent to the definition from the previous line */

    int i = 0;
    int offset = 0;

    /* output array using array subscription notation */
    printf("Array printed with: \n Array subscript notation \n");
    for(i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    /* output array using array offset notation */
    printf("\n Array offset notation \n");
    for(offset = 0; offset < 5; offset++)
    {
        printf("*(array + %d) = %d\n", offset, *(array + offset));
    }

    /* output array using pointer subscription notation */
    printf("\n Pointer subscript notation \n");
    for(i = 0; i < 5; i++)
    {
        printf("array_ptr[%d] = %d\n", i, array_ptr[i]);
    }

    /* output array using pointer offset notation */
    printf("\n Pointer offset notation \n");
    for(offset = 0; offset < 5; offset++)
    {
        printf("*(array_ptr + %d) = %d\n", offset, *(array_ptr + offset));
    }

    return 0;
}
