#include <stdio.h>

int main()
{
    int n, primeiro_termo = 0, segundo_termo = 1, proximo;

    do
    {
        printf("Valores tem que ser positivos maiores que zero!!!");
        printf("Entre com os valores de n positivos: ");
        scanf("%d", &n);

    } while (n <= 0);

    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            printf("%d ", primeiro_termo);
        }
        else if (i == 1)

        {
            printf("%d ", segundo_termo);
            proximo = primeiro_termo + segundo_termo;
            primeiro_termo = segundo_termo;
            segundo_termo = proximo;
            continue;
        }
        printf(" %d", proximo);
    }
    return 0;
}
