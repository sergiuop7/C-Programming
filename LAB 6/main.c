/***********************************************************/
/* Complex application                                     */
/* Copyright: 2020                                         */
/* License: Tehnical University of Cluj-Napoca             */
/* Author: Teodora Sanislav <Teodora.Sanislav@aut.cluj.ro> */
/* Version: 11-19-2020                                     */
/* Updates: users.utcluj.ro/~tsanislav                     */
/***********************************************************/

/* Include standard headers: */
#include <stdio.h>
#include <stdlib.h>

/* Include modules header that are directly invoked: */
#include "matrix.h"

int main()
{
    int m = 0, n = 0, p = 0;            //matrices dimensions
    int **matrix1, **matrix2, **result; //matrices

    /* Read the dimensions of the matrices */
    printf("Please input the number of rows of the First matrix: ");
    scanf("%d", &m);
    printf("Please input the number of columns/rows of the First matrix/Second matrix: ");
    scanf("%d", &n);
    printf("Please input the number of columns of the Second matrix: ");
    scanf("%d", &p);

    /* Allocate memory for matrices */
    matrix1 = alloc_matrix(m, n);
    matrix2 = alloc_matrix(n, p);

    /* Read and print matrices matrix1 and matrix2 */
    read_matrix(matrix1, m, n, "First matrix");
    print_matrix(matrix1, m, n, "First matrix");
    read_matrix(matrix2, n, p, "Second matrix");
    print_matrix(matrix2, n, p, "Second matrix");

    /* Multiply matrix1 by matrix2 and print the result */
    result = multiply_matrix(matrix1, matrix2, m, n, p);
    print_matrix(result, m, p, "Product");

    /* Deallocate memory */
    free_matrix(result, n);
    free_matrix(matrix2, n);
    free_matrix(matrix1, m);
    return 0;
}
