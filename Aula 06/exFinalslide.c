#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    double h = 1;

    printf("Digite a quantidade de termos para a conta: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("O valor de N nao pode ser negativo. Tente novamente!!\n");
        exit(2);
    }

    // começa em 2 para calcular apartir do segundo termo. H = 1 + 1/2 + 1/3 + ¼ + ... 1/N
    for (int i = 2; i <= a; i++)
    {

        h += 1.0 / i;
    }
    printf("O valores de H para N = %d e %.2f\n", a, h);

    return 0;
}
