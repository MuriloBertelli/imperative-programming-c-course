#include <stdio.h>

int main()
{
    char *const inf = "ACGT";
    char sequencia[80];
    printf("entre com a sequencia: ");
    scanf("%s", sequencia);

    for (char *i = inf; *i != '\0'; i++)
    {
        int contator = 0;
        for (char *j = sequencia; *j != '\0'; j++)
        {
            if (*j == *i)
                contator++;
        }
        printf("%c: %d\n", *i, contator);
    }
}