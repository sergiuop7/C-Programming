#include <stdio.h>
#include <stdlib.h>

//a
struct part
{
    int part_number;
    char part_name[25];
}x;

//b
 typedef struct part Part;
 /*
typedef struct
{
    int part_number;
    char part_name[25];
}Part; */

int main()
{
    //c
    Part a, b[10], *ptr; //struct a, b[10], *ptr;

    //d
    scanf("%d%s", &a.part_number, &a.part_name);

    //e
    b[2] = a;

    //f
    ptr = b;

    //g
    printf("%d %s", (ptr +2) -> part_number, (ptr +2) -> part_name);

    return 0;
}
