#include <stdio.h>

int main()
{
    char *frase = "O meu som e a minha furia e essa pressa de viver";
    char chave = 's';
    char *p = frase;
    while (*p != chave)
        p++;
    printf("%d", p - frase);
}