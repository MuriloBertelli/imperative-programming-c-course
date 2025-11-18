#include <stdio.h>
#include <string.h>

int main()
{
    char *cidade = "Curitiba, PR";

    printf("%s", cidade);
    printf("Cidade: %d caracteres\n", strlen(cidade));
    printf("Cidade: %d bytes\n", sizeof(cidade));

    putchar(cidade[0]);
    putchar(cidade[2]);
    putchar(cidade[4]);

    // não funcionou, pois vira uma constante. 
    cidade[0] = 'K';

    putchar(cidade[0]);
    
}