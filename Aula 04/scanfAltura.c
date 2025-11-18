#include <stdio.h>

int main()
{
    double altura = -1;
    printf("Digite a sua altura: ");
    scanf("%5lf", &altura);
    // %.2f -> .2 quantas casas dps da virgura
    printf("sua altura: %.2f\n", altura);
    return 0;
}