#include <stdio.h>
#include <stdbool.h>

int main()
{

    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    short *g = &a;
    printf("g: %p\n", g);
    printf("valor de g: %d\n", *g);

    double *j = &b;
    printf("j: %p\n", j);
    printf("valor de j: %d\n", *j);

    char *l = &c;
    printf("l: %p\n", l);
    printf("valor de l: %d\n", *l);

    bool *h = &d;
    printf("h: %p\n", h);
    printf("valor de h: %d\n", *h);
}