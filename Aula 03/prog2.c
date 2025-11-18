#include <stdio.h>

int main()
{
    int a = 10;

    printf("Endereco de a: %p\n", &a);
    printf("tamanho de a: %zu\n", sizeof(a));

    int *p = &a;

    printf("Valor de p: %p\n", p);
    printf("valor apontado por p: %d\n", *p);
    printf("endereco de p: %p\n", &p);
    printf("tamanho de p: %zu\n", sizeof(p));
}