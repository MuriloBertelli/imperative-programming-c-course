// Escreva um programa na Linguagem C que leia um valor de hora no formato
// hora:minutos e informe (calcule) o total de minutos que se passaram desde o
// início do dia (0:00h).
#include <stdio.h>

int main()
{
    int hora, minutos, total_minutos;

    printf("Digite a hora no formato hora:minutos: ");
    scanf("%d:%d", &hora, &minutos);

    total_minutos = hora * 60 * minutos;

    printf("Total de minutos desde o inicio do dia: %d", total_minutos);

    return 0;
}