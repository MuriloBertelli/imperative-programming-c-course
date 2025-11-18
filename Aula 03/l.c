#include <stdio.h>
#include <stdbool.h>

int main()
{
    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;
    // return 0;

    printf("endereco de a: %p \n", &a);
    printf("Tamanho: %zu \n", sizeof(a));

    printf("endereco de b:%p \n", &b);
    printf("Tamanho: %d \n", sizeof(b));

    printf("endereco de c: %p\n", &c);
    printf("Tamanho: %d \n", sizeof(c));

    printf("Tamanho de d: %d\n", sizeof(d));
    printf("endereco de d: %p\n", &d);
    return 0;
}