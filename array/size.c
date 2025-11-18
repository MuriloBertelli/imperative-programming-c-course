#include <stdio.h>
#include <stdbool.h>

int main()
{
    float nota[6] = {
        7.0,
        8.5,
        6.2,
        9.0,
        4.5,
        8.0};
    printf("__________________FLOAT_SIZE________________________________\n");
    int tamanho_vetor = sizeof(nota);
    printf("Tamanho o vetor: %zu bytes\n", tamanho_vetor);

    int tamanho_elemento = sizeof(nota[0]);
    printf("Tamnho de um elemento: %zu bytes\n", tamanho_elemento);

    int capacidade_vetor = tamanho_vetor / tamanho_elemento;
    printf("Logo, o vetor possui %d elementos. \n", capacidade_vetor);
    printf("_____________________BOOL_SIZE______________________________________\n");
    bool b[] = {true, false, false, true, false, true};

    int num_elementos = sizeof(b) / sizeof(bool);
    printf("Numero de elementos : %d\n", num_elementos);
    for (int i = 0; i < num_elementos; i++)
    {
        if (b[i])
            puts("Verdadeiro");
        else
            puts("falso");
    }
}