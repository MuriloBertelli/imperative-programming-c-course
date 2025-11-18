// Escreva um programa na Linguagem C que efetue o cálculo do salário líquido
// de um funcionário horista. Os dados fornecidos pelo usuário via teclado devem ser:
// valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS e
// o percentual de desconto do Imposto de Renda.

#include <stdio.h>

int main()
{
    float valor_H_aula, desconto_INSS;
    float numero_d_aulas_mes, salario_l;

    printf("Entre com a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &valor_H_aula);

    printf("Quantas aulas voce deu neste mes: ");
    scanf("%f", &numero_d_aulas_mes);

    printf("Desconto de INSS: ");
    scanf("%f", &desconto_INSS);

    printf("Salario liquido\n");

    salario_l = (valor_H_aula * numero_d_aulas_mes) - (desconto_INSS / 100);

    printf("S: %.4f", salario_l);
}