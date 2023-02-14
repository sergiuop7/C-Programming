void function(int size)
{
    int **matrix = {0};
    int s = 0;

    matrix = (int **) malloc(size * sizeof(int *));

    for(int i = 0; i < size; i++) {
        *(matrix + i) = (int *) malloc(size * sizeof(int));
        if(!(*(matrix + i))) {
        printf("The matrix wasn't allocated.");
        exit(1);
        }
    }

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            if(1 != scanf("%d", *(matrix + i) + j));
    }
    printf("\n");

    for(int i = 0; i < size; i++) {
        sum = 0;
        for(int j = 0; j < size; j++) {
            sum += *(*(matrix + i) + j);
        }
        printf("The sum of the row number %d is equal with %d.\n", i + 1, sum);
    }

    for(int i = 0; i < size; i++) {
        free(*(matrix + i));
    }

    free(matrix);
}
