#include <stdio.h>

int main()
{
    double PI = 3.14;

    double raio = 10.0;

    double area = PI * raio * raio;

    printf("Area do Circulo \n");
    // f numero real
    printf("%f\n", area);

    // Mostra o tamanho de um double que seria a Area
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(short));

    // endereço de uma variavel
    printf("%p\n", &area);
    printf("%p\n", &PI);
    // d para numero hex decimal
    printf("%d\n", &raio);

    return 0;
}