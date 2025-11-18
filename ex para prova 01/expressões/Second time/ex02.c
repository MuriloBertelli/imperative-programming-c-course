#include <stdio.h>

int main()
{
    double temperatura_C, tempertura_F;

    printf("Temperatura em C: ");
    scanf("%lf", temperatura_C);

    printf("Temperatura em Fahrenheit\n");
    tempertura_F = (9 * temperatura_C + 160) / 5;

    printf(" %.2f", tempertura_F);
}