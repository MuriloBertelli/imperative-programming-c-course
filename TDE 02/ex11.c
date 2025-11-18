#include <stdio.h>

int main()
{
    char *const frase = "Muitos se perderam no caminho";

    const char c1 = 'e';
    const char c2 = 'r';
    char *p = frase;

    while (*p != '\0')
    {
        const char* q = p + 1;
        if (*p == c1 && *q == c2)
            printf("%d\n", (p - frase));
        p++;
    }
}
