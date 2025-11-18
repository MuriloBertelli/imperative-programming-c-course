#include <stdio.h>

int main()
{
    char a, b, c;
    printf("Digite 3 letras: ");

    a = getchar();
    b = getchar();
    c = getchar();

    printf("%c%c%c\n", a, b, c);

    if (b < a)
    {
        char aux = a;
        a = b;
        b = aux;
    }
    if (c < b)
    {
        char aux = b;
        b = c;
        c = aux;
    }
    if (b < a)
    {
        char aux = a;
        a = b;
        b = aux;
    }

    printf("%c%c%c\n", a, b, c);
}
