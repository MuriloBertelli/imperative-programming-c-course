#include <stdio.h>

typedef enum
{
    SABADO,
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA
} Dia;

typedef struct
{
    Dia dia;
    double preco;
} Servico;

int main()
{
    Servico s1 = {TERCA, 100.00};
    Servico s2 = {SABADO, 150.00};

    if (s1.dia < s2.dia)
        printf("%.2f", s1.preco - s2.preco);
    else
        printf("%.2f", s1.preco + s2.preco);
    return 0;
}