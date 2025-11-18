// Escreva um programa na Linguagem C para calcular e apresentar o valor do
// volume de uma lata de óleo cilíndrica utilizando a seguinte fórmula:
#include <math.h>
#include <stdio.h>

int main()
{
    float V, r, h;
    float pi = 3.14159;
    printf("Entre com os valores do raio e altura: ");
    scanf("%f %f", &r, &h);

    V = (pi * pow(r, 2) * h);

    printf("Volume: %f m3", V);
}
