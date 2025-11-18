#include <stdio.h>

int main()

{
    int a = 10;
    int b = 4;
    int c = 8;
    if (a < c && c % b == 0)
        if (b > a)
            printf("azul");
        else
            printf("verde");
    else
        printf("vermelho");
    return 0;
}