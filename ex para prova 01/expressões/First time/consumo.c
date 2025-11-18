// Escreva um programa na Linguagem C que efetue o cálculo do volume de
// combustível gasto em uma viagem, sabendo-se que o carro faz 12 km com um litro de
// combustível. Deverão ser fornecidos como entrada do programa os seguintes dados: o
// tempo gasto na viagem e a velocidade média.

// O programa deverá exibir a distância percorrida e o volume de combustível gasto na
// viagem.
#include <stdio.h>

int main()
{
    float tempo_gasto, velocidade_media, media_d_consumo_carro;
    float distancia, volume;

    printf("Em media, quantos km/L o seu carro faz na estrada ?");
    scanf("%f", &media_d_consumo_carro);

    printf("Quanto tempo de viajem ? ");
    scanf("%f", &tempo_gasto);

    printf("Qual foi a velocidade media de viagem ?");
    scanf("%f", &velocidade_media);

    distancia = tempo_gasto * velocidade_media;
    volume = distancia / media_d_consumo_carro;

    printf("Distancia percorrida: %.2f\n", distancia);
    printf("Volume de combustivel gasto na viagem: %.2f", volume);
}