#include <stdio.h>
int main()
{
    int a = 10;

    printf("Endereco de a: %p\n", &a);
    printf("tamanho de a: %zu\n", sizeof(a));

    int *p = &a;
    printf("valor de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    printf("endereco de p: %p\n", &p);
    printf("Tamanho de p: %zu\n", sizeof(p));
}