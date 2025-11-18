#include <stdio.h>

int main()
{
    int n, primeiro = 0, segundo = 1, proximo;

    printf("Entre com a quantidade de termos para a sequencia: ");
    scanf("%d", &n);

    printf("Os %d da sequencia de fibonacii sao: \n", n);

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            proximo = i;
        }
        else
        {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }
    printf("\n");
    return 0;
}