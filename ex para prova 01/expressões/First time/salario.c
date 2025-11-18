// Escreva um programa na Linguagem C que efetue o cálculo do salário líquido
// de um funcionário horista. Os dados fornecidos pelo usuário via teclado devem ser:
// valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS e
// o percentual de desconto do Imposto de Renda.
#include <stdio.h>

int main()
{
    float valor_horas_aula, numero_aula, percentual_inss, percentual_ir;
    float salario_bruto, salario_liquido, desconto_inss, desconto_ir;

    // solicitações de dados do usiario
    printf("Digite o valor de horas aula: ");
    scanf("%f", &valor_horas_aula);

    printf("Digite o numero de aulas dadas no mes: ");
    scanf("%f", &numero_aula);

    printf("Entre com o percentual de desconto do INSS: ");
    scanf("%f", &percentual_inss);

    printf("Entre com o percentual de descondo do imposto de renda: ");
    scanf("%f", &percentual_ir);

    // calcular salario bruto
    salario_bruto = valor_horas_aula * numero_aula;

    // calcular os descontos
    desconto_inss = salario_bruto * (percentual_inss / 100);
    desconto_ir = salario_bruto * (percentual_ir / 100);

    // calcular o salaruo liquido
    salario_liquido = salario_bruto - desconto_inss - desconto_ir;

    // exibir resultados
    printf("Salario bruto: %.2f\n", salario_bruto);
    printf("Desconto de INSS: %.2f\n", desconto_inss);
    printf("deconto do imposto de renda: R$ %.2f\n", desconto_ir);
    printf("Salario Liquido: %.2f\n", salario_liquido);

    return 0;
}