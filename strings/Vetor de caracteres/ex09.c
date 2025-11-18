#include <stdio.h>
#include <string.h>
#define MAX 10
int main()
{
    char texto[MAX];
    fgets(texto, MAX, stdin); // Stdion(teclado)

    printf("%d\n", strlen(texto)); // strlen (função para ver o tamanho da string)
    puts(texto);

    char ultimo = texto[strlen(texto) - 1];
    printf("ultimo carater: %c\n", ultimo);
    printf("%d\n", ultimo);
    return 0;
}
