#include <stdio.h>
int main()
{
    int t = 0;
    for (int i = 2; i <= 4; i++)
    {
        int p = i * i;
        t = t + p;
    }
    printf("%d", t);
    return 0;
}