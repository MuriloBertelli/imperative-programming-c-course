#include <stdio.h>

int main()
{
    printf("Digite um caracter e ENTER: ");
    char c = getchar(); // le apenas um caracter

    printf("caracter digitado:");

    putchar(c);

    c = getchar();
    putchar(c);
}