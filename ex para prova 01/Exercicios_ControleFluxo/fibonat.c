#include <stdio.h>

int main()
{
    int n, primeiro = 0, segundo = 1, proximo;

    printf("Entre com a quantidade de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d", primeiro);
        }
        else if (i == 1)
        {
            printf("%d", segundo);
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
            continue;
        }
        printf("%d", proximo);
    }
    return 0;
}