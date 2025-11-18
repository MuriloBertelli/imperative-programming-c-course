#include <stdio.h>

int main()
{
    unsigned int placa;

    printf("Entre com a numeracao da sua placa (quatro algarismos): ");
    scanf("%u", &placa);

    unsigned int estado = placa / 1000;
    unsigned int cidade = (placa % 1000) / 100;
    unsigned int numero_veiculo = placa % 100;

    printf("Numero do estado: %u\n", estado);
    printf("Numero da cidade: %u\n", cidade);
    printf("numero do veiculo na cidade: %u\n", numero_veiculo);

    return 0;
}