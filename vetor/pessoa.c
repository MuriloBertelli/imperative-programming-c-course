#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
} Pessoa;

Pessoa cria_pessoa()
{
    Pessoa k;
    strcpy(k.nome, "Maria");

    k.idade = 20;
    return k;
}

int main()
{
    Pessoa x;
    x = cria_pessoa();
    printf("%s\n", x.nome);
    printf("%d\n", x.idade);

    return 0;
}
