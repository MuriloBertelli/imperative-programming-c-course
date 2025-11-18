#include <stdio.h>
#include <string.h>

#define NUM_MESES 12
#define NUM_PINTORES 20
#define MAX_NOME 50

char *mes_str[NUM_MESES] = {"janeiro", "fevereiro", "marco",
                            "abril", "maio", "junho",
                            "julho", "agosto", "setembro",
                            "outubro", "novembro", "dezembro"};


typedef enum {JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ} Mes;

typedef struct
{
    char nome [MAX_NOME]; // nome da pessoa
    Mes mes; // mes do aniversario da pessoa
}Pessoa;

int main () 
{
    Pessoa pintor [NUM_PINTORES];

    pintor[ 0].mes = JAN; strcpy(pintor[ 0].nome, "Leonardo da Vinci");
    pintor[ 1].mes = ABR; strcpy(pintor[ 1].nome, "Sandro Botticelli");
    pintor[ 2].mes = AGO; strcpy(pintor[ 2].nome, "Georges Seurat");
    pintor[ 3].mes = ABR; strcpy(pintor[ 3].nome, "Vincent van Gogh");
    pintor[ 4].mes = SET; strcpy(pintor[ 4].nome, "Paul Gauguin");
    pintor[ 5].mes = JUN; strcpy(pintor[ 5].nome, "Edouard Manet");
    pintor[ 6].mes = OUT; strcpy(pintor[ 6].nome, "Paul Cezanne");
    pintor[ 7].mes = JUN; strcpy(pintor[ 7].nome, "Auguste Renoir");
    pintor[ 8].mes = JUN; strcpy(pintor[ 8].nome, "Claude Monet");
    pintor[ 9].mes = AGO; strcpy(pintor[ 9].nome, "Pablo Picasso");
    pintor[10].mes = DEZ; strcpy(pintor[10].nome, "Edgar Degas");
    pintor[11].mes = ABR; strcpy(pintor[11].nome, "Edvard Munch");
    pintor[12].mes = JAN; strcpy(pintor[12].nome, "Michelangelo Meris Caravaggio)");

    int mes_pesquisa;

    printf("(1) janeiro\n");
    printf("(2) fevereiro\n");
    printf("(3) marco\n");
    printf("(4) abril\n");
    printf("(5) maio \n");
    printf("(6) junho\n");
    printf("(7) julho\n");
    printf("(8) agosto\n");
    printf("(9) setembro\n");
    printf("(10) outubro\n");
    printf("(11) novembro\n");
    printf("(12) dezembro\n");

    printf("Esconlha o mes pelo seu numero: ");
    scanf("%d", &mes_pesquisa);

    if (mes_pesquisa < 1 || mes_pesquisa > 12)
    {
        printf("Erro, n! existe este mes!!");
        return 1;
    }

    printf("Pintores nascidos em %s:\n",mes_str[mes_pesquisa - 1] );

    for ( int i = 0; i < NUM_PINTORES; i++ )
    {
        if (pintor[i].mes == mes_pesquisa - 1)
        {
            printf(" - %s\n", pintor[i].nome);
        }
    }

    return 0;

}
