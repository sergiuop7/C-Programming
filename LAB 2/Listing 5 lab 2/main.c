#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   integer_no = 5;
    float float_no = integer_no / 6;

    ((float_no = (float) integer_no / 6) != 0)? printf("YES") : printf("NO");

    return 0;
}
