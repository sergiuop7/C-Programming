#include <stdio.h>
#include <stdlib.h>

int main()
{
    double value1 = 50.0, value2 = 0;
    // a)
    double *double_ptr;

    // b)
    double_ptr = &value1;

    // c)
    printf("%lf\n", *double_ptr);

    // d)
    value2 = *double_ptr;

    // e)
    printf("%lf\n", value2);

    // f)
    printf("%p\n", &value1);

    // g)
    printf("%p\n", double_ptr);
    return 0;
}
