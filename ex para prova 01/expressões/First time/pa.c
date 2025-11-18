#include <stdio.h>

int main()
{
    int primeiro_termo, razao, n;

    // Solicita os dados ao usuário
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula o n-ésimo termo da PA
    int termo_n = primeiro_termo + (n - 1) * razao;

    // Imprime o resultado
    printf("O %d-esimo termo da PA e: %d\n", n, termo_n);

    return 0;
}