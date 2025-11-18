#include <stdio.h>
#include <stdbool.h>

int main()
{
    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    short *p = &a;

    printf("endereco de p: %p\n", &p);
    printf("conteudo p: %d \n", *p);

    double *f = &b;

    printf("endereco de f: %p\n", &f);
    printf("Conteudo f: %d\n", *f);

    char *s = &c;

    printf("endereco de s: %p\n", &s);
    printf("Conteudo s: %d\n", *s);

    bool *t = &d;

    printf("endereco de t: %p\n", &t);
    printf("Conteudo t: %d\n", *t);
}