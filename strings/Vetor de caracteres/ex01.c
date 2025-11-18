#include <stdio.h>

int main()
{
    char palavra[10];
    palavra[0] = 'T';
    palavra[1] = 'e';
    palavra[2] = 'r';
    palavra[3] = 'r';
    palavra[4] = 'a';
    palavra[5] = '\0';
    palavra[6] = 'b';
    palavra[7] = 'o';
    palavra[8] = 'a';
    palavra[9] = '\0';
    printf("%s\n", palavra);
    printf("%s\n", &palavra[6]);
}