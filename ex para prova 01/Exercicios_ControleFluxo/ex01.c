#include <stdio.h>

int main()
{
    int limit_inf, limit_sup;
    int tentativas = 0;

    while (tentativas < 3)
    {

        // entrada dos limites
        printf("Difgite o limite inferior: ");
        scanf("%d", &limit_inf);

        printf("Entre com o limite superior: ");
        scanf("%d", &limit_sup);

        if (limit_inf > limit_sup)
        {
            printf("O limite inferiro nao pode ser maior que o limite superior!!!!\n");
            tentativas++;
        }
        else if (limit_inf == limit_sup)
        {
            printf("Limites nao podem ser iguais!!!\n");
            tentativas++;
        }
        else
        {
            printf("Os multiplos de 3 no intervalo de {%d a %d} sao:\n", limit_inf, limit_sup);
            for (int i = limit_inf; i < limit_sup; i++)
            {
                if (i % 3 == 0)
                {
                    printf("%d", i);
                }
            }
            printf("\n");
            return 0;
        }
    }
    return 15;
}