#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Sequencia de Fibonacci e: %d", fibonacci(n));
}