#include <stdio.h>

int main () 
{
    int a, b;
    puts("Entre com valores inteiros e positivos distintos: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    if (a != b)
        if(a < b)
            printf("%d %d\n", a, b);
        else
            printf("%d %d", b, a);
    else
        printf("Os valores nao sao distintos! ");

    return 0;
    

    

}