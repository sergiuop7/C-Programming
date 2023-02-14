void sum_of_rows(int n, const char *name)
{
    int **matrix = NULL;
    int i = 0 , x = 0, k, j;
    int s[100]={0};

    matrix = (int **) malloc(n * sizeof(int *));
    if(!matrix) return NULL;
    for(i = 0; i < n; i++)
    {
        *(matrix + i) = (int *) malloc(n * sizeof(int));
        if(!(*(matrix + i))) return NULL;
    }

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            printf("%s[%d][%d] = ", name, i, j);
            if(1 != scanf("%d", *(matrix + i) + j))
                break;
        }

    for(k=0;k<n;k++)
    {
        for(k=0;k<n;k++)
        {
            s[x]=s[x]+(*(*(matrix+l)+j));}
            x+=1;
            s[x]=0;}

    for(l=0;l<x;l++)
    {
        printf("sum of row number %d is %d \n",l,s[l]);
    }

    for(i = 0; i < n; i++)
    {
        free(*(matrix + i));
    }
    free(matrix);

}
