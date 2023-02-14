
/***********************************************************/
/* matrix.h - Header file for module matrix                */
/* Copyright: 2020                                         */
/* License: Tehnical University of Cluj-Napoca             */
/* Author: Teodora Sanislav <Teodora.Sanislav@aut.cluj.ro> */
/* Version: 11-19-2020                                     */
/* Updates: users.utcluj.ro/~tsanislav                     */
/***********************************************************/
#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

/* Headers required by the following definitions/declarations: */
#include <stdlib.h>

/* Constant definitions: */

/* Types definitions: */

/* Global variables declarations: */

/* Function prototypes: */
extern int **alloc_matrix(int, int);
extern void free_matrix(int**, int);
extern int read_matrix(int**, int, int, const char*);
extern void print_matrix(int**, int, int, const char*);
extern int **multiply_matrix(int**, int**, int, int, int);

#endif // MATRIX_H_INCLUDED
