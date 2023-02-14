#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 3
#define ROWS 3
#define COLUMNS 3

void print_element(int);
void print_mult_array(int, int*, int);
void print_matrix(int, int, const int (*)[COLUMNS]);

int main()
{
    int array[SIZE] = {1, 2, 3};
    int matrix[ROWS][COLUMNS] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("The last element of the array: ");
    print_element(array[SIZE-1]);
    printf("The array elements multiplied by 2:\n");
    print_mult_array(SIZE, array, 2); /* pass array to print_multi_array */
    printf("\nThe matrix elements:\n");
    print_matrix(ROWS, COLUMNS, matrix); /* pass matrix to print_matrix */

    return 0;
}

/* print an element of an array */
void print_element(int element)
{
    printf("%d\n", element);
}

/* print the elements of an array multiplied by a value */
void print_mult_array(int size, int *ptr, int value)
{
    int i = 0;
    for(i = 0; i < size; i++)
    {
        printf("\t %d", *ptr * value);
        ptr++;
    }
}

/* print the elements of a matrix */
void print_matrix(int rows, int columns, const int (*ptr)[columns])
{
    int i = 0, j = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j< columns; j++)
            printf("\t %d", ptr[i][j]);
        printf("\n");
    }
}
