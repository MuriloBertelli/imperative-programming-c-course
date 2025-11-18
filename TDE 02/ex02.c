#include <stdio.h>

void f(int *x)
{

    *x = 2 * (*x);
}

int main()
{

    int a = 10;
    f(&a);
    printf("%d", a);
}