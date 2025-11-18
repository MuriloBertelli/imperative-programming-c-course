#include <stdio.h>
int f(int x)
{
    if (x > 0)
        return 2 * f(x - 1);
    else
        return 1;
}

int main()
{
    printf("%d", f(4));
}