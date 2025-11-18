#include <stdio.h>

int f(int x)
{

    x = 2 * x;
    return x;
}

int main()
{

    int a = 10;
    a = f(a);
    printf("%d", a);
}