#include <stdio.h>
int main()
{
    char v[] = {'b', 'e', 'r', 'i', 'n', 'g', 'e', 'l', 'a'};
    int N = sizeof(v) / sizeof(char);
    for (int i = 0; i < N; i++)
    {
        if (v[i] <= 'g')
            putchar(v[i]);
    }
    return 0;
}
