#include <stdio.h>

int main()
{
    int idade;
    double altura;
    printf("digite a sua idade e a sua altura: ");
    scanf("%3d %5lf", &idade, &altura);

    printf("Sua idade: %d\n", idade);
    printf("================\n");
    printf("sua altura: %.2f\n", altura);
}