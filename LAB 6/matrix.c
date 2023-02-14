/*********************************************************/
/* matrix.c - See matrix.h for copyright and info        */
/*********************************************************/

/* System headers and application specific headers: */
#include "matrix.h"

/* Private constants: */

/* Private types: */

/* Private global variables: */

/* Public global variables: */

/* Implementation of the private functions */

/* Implementation of the public functions */

/***************************************************************************/
/* FUNCTION NAME: alloc_matrix                                             */
/* DESCRIPTION: allocates memory for a m by n matrix of ints               */
/* ARGUMENT LIST:                                                          */
/* Argument        Type       IO        Description                        */
/* ------------- ----------- -------- ----------------------               */
/* int            m           I        number of rows for matrix           */
/* int            n           I        number of columns for matrix        */
/* RETURN VALUE:  int **      pointer to allocated area or NULL on failure */
/* CHANGES: -                                                              */
/***************************************************************************/
int **alloc_matrix(int m, int n)
{
    int **matrix = NULL;
    int i = 0;

    matrix = (int **) malloc(m * sizeof(int *));
    if(!matrix) return NULL;
    for(i = 0; i < m; i++)
    {
        *(matrix + i) = (int *) malloc(n * sizeof(int));
        if(!(*(matrix + i))) return NULL;
    }
    return matrix;
}

/***************************************************************************/
/* FUNCTION NAME: free_matrix                                              */
/* DESCRIPTION: deallocates memory for a m by n matrix of ints             */
/* ARGUMENT LIST:                                                          */
/* Argument        Type       IO        Description                        */
/* ------------- ----------- -------- ----------------------               */
/* int **         matrix      I        matrix to free                      */
/* int            m           I        number of rows of matrix           */
/* RETURN VALUE:  void                                                     */
/* CHANGES: memory area freed can no longer be used                        */
/***************************************************************************/
void free_matrix(int **matrix, int m)
{
    int i = 0;

    for(i = 0; i < m; i++)
    {
        free(*(matrix + i));
    }
    free(matrix);
}

/***************************************************************************/
/* FUNCTION NAME: read_matrix                                              */
/* DESCRIPTION: reads a matrix                                             */
/* ARGUMENT LIST:                                                          */
/* Argument        Type       IO        Description                        */
/* ------------- ----------- -------- ----------------------               */
/* int **         matrix      I        pointer to memory area where        */
/*                                       to store read data                */
/* int            m           I        number of rows of matrix            */
/* int            n           I        number of columns of matrix         */
/* const char*    name        I        name to be displayed for each       */
/*                                      element of the matrix              */
/* RETURN VALUE:  int 1 on succes, 0 otherwise                             */
/* CHANGES: memory area previously reserved for storing the read matrix    */
/***************************************************************************/
int read_matrix(int **matrix, int m, int n, const char *name)
{
    int i = 0, j = 0;

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        {
            printf("%s[%d][%d] = ", name, i, j);
            if(1 != scanf("%d", *(matrix + i) + j))
                return 0;
        }
    return 1;
}

/*****************************************************************************/
/* FUNCTION NAME: print_matrix                                               */
/* DESCRIPTION: prints a matrix preceeded by a name given to it              */
/* ARGUMENT LIST:                                                            */
/* Argument        Type       IO        Description                          */
/* ------------- ----------- -------- ----------------------                 */
/* int **         matrix      I        matrix to print                       */
/* int            m           I        number of rows for matrix to print    */
/* int            n           I        number of columns for matrix to print */
/* const char*    name        I        name of matrix                        */
/* RETURN VALUE:                                                             */
/* CHANGES: -                                                                */
/*****************************************************************************/
void print_matrix(int **matrix, int m, int n, const char *name)
{
    int i = 0, j = 0;

    printf("Matrix %s is:\n--------------------------\n", name);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", *(*(matrix + i) + j));
        }
        printf("\n");
    }
    printf("----------------------------------------\n");
}

/*****************************************************************************/
/* FUNCTION NAME: multiply_matrix                                            */
/* DESCRIPTION: multiplies matrices matrix1 and matrix2                      */
/* ARGUMENT LIST:                                                            */
/* Argument        Type       IO        Description                          */
/* ------------- ----------- -------- ----------------------                 */
/* int **         matrix1     I        matrix matrix1                        */
/* int **         matrix2     I        matrix matrix2                        */
/* int            m           I        number of rows of matrix1             */
/* int            n           I        number of columns of matrix1          */
/*                                      and rows of matrix2                  */
/* int            p           I        number of columns of matrix 2         */
/* RETURN VALUE: int **       a newly allocated matrix holding               */
/*                              the product of matrix1 and matrix2           */
/* CHANGES: -                                                                */
/*****************************************************************************/
int **multiply_matrix(int **matrix1, int **matrix2, int m, int n, int p)
{
    int i = 0, j = 0, k = 0;
    int **result = alloc_matrix(m, p); //allocate result matrix

    for(i = 0; i < m; i++)
        for(j = 0; j < p; j++)
            *(*(result + i) + j) = 0;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            for(k = 0; k < p; k++)
                *(*(result + i) + k) += (*(*(matrix1 + i) + j)) * (*(*(matrix2 + j) + k));
    return result;
}

