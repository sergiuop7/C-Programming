#include <stdio.h>
#include <stdlib.h>


typedef struct{
        char *firstName;
        char *lastName;
        int length;
}name;

name get_info(name n);
void make_info(name *n);
void show_info(name *n);

int main()
{
    name n;
    n = get_info(n);
    //printf("%s %s", n.firstName, n.lastName);
    make_info(&n);
    show_info(&n);
    return 0;
}

name get_info(name n)
{
    char a[20];

    printf("Enter the first name: ");
    scanf("%s", a);

    n.firstName = (char *)malloc(strlen(a) + 1);
    strcpy(n.firstName, a);

    printf("Enter the last name: ");
    scanf("%s", a);

    n.lastName = (char *)malloc(strlen(a) + 1);
    strcpy(n.lastName, a);

    return n;
}

void make_info(name *n)
{
    n->length = strlen(n -> firstName) + strlen(n -> lastName);
}

void show_info(name *n)
{
    printf("First name: %s\nLast name: %s\nLength: %d\n", n->firstName, n->lastName, n->length);
}
