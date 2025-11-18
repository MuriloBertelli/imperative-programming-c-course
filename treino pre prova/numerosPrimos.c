#include <stdio.h>

int main()
{
    int limit_sup, limit_inf;
    int tentativas = 0;

    while (tentativas < 3)
    {

        printf("Digite o limite inferior: ");
        scanf("%d", &limit_inf);

        printf("Entre com o limite superior: ");
        scanf("%d", &limit_sup);

        if (limit_inf > limit_sup)
        {
            printf("O limite inferior n pode ser maior que o superiro!!");
            tentativas++;
        }
        else if (limit_inf == limit_sup)
        {
            printf("Limites não podem ser iguais!!!");
            tentativas++;
        }
        printf("Os numeros primos dos intervalos de {%d,%d}", limit_inf, limit_sup);
        for (int i = limit_inf; i < limit_sup; i++)
        {
            if (i % 3 == 0)
            {
                printf("%d", i);
            }
        }
    }
}