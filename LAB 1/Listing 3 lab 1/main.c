#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100]="", q[100]="";
    int a=0, b=0;
    float c=0.0f, d=0.0f;

    printf("Input on the same row values for integer and real c separated by a whitespace character and followed by ENTER\n");
    fgets(s, sizeof(s), stdin);
    sscanf(s, "%f %d\n", &a, &c);
    printf("a=%4d c=%8.3f", a , c);
    sprintf(q, "%4d %8.3f", a , c);
    sscanf(q, "%d %f", &b, &d);
    printf("b=%5d d=%9.4f\n", b, d);
    return 0;

}
