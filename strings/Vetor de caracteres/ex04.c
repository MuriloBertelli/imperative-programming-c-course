#include <stdio.h>

int main()
{
    char titulo[] = {'R', 'o', 'd', 'a', ' ', 'V', 'i', 'v', 'a', '\0'};
    printf("%s\n", titulo);
    printf("titulo: %zu bytes\n", sizeof(titulo));
}