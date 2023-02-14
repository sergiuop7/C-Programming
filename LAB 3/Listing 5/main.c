#include <stdio.h>
#include <stdlib.h>
#define PERIOD '.'

int main()
{
    int character = 0, no_character = 0;

    printf("Compute how many times the characters other than single or double quotes appear in an input sentence.\n");
    printf("Type . to end the sentence.\n");
    printf("Input sentence: ");
    while(( character = getchar()) != PERIOD)
    {
        if((character != '"') && (character != '\''))
        no_character++;
    }
    printf("There are %d non quote characters.\n", no_character);

    return 0;
}
