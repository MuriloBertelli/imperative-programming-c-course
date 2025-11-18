#include <stdio.h>
#include <string.h>
int main()
{
    char nome[20] = "Ana Terra";
    printf("%s\n", nome);
    printf("espaco ocupado pela variavel: %zu bytes\n", sizeof(nome));
    printf("comprimento da string: %zu carateres\n", strlen(nome));
    return 0;
}
