#include <stdio.h>
#include <stdlib.h>
#define PERIOD '.'

int main()
{
   int character = 0, no_character = 0;

    printf("Compute how many times the charactcers other than single or double quotes appear in an input sentence.\n");
    printf("Type . to end the sentence.\n");
    printf("Input sentence: ");
    do
    {
        if((character != '"') && (character != '\''))
        no_character ++;
    } while(( character = getchar()) != PERIOD);

    printf("There are %d non quote characters.\n", no_character - 1);

    return 0;
}
