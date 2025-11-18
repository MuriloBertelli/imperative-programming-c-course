// Escreva um programa na Linguagem C que leia uma temperatura em gruas
// Celsius e apresente a temperatura convertida em graus Fahrenheit. A fórmula de
// conversão é:
#include <stdio.h>

int main()
{
    float temperatura_C, temperatura_F;

    printf("Quantos graus esta agora na sua cidade ? ");
    scanf("%f", &temperatura_C);

    // conversão de C para F

    temperatura_F = (9 * temperatura_C + 160) / 5;

    printf("A temperatura indicada foi de: %.2fC\n", temperatura_C);
    printf("A temperatura em Fahrenheit: %.3fF\n", temperatura_F);
}