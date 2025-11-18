#include <stdio.h>

int main()
{
    float notas[4] = {7.0, 4.0, 5.6, 7.0};

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Diigte o valor do elemento %d: ", i);
    //     scanf("%f", &notas[i]);
    // }

    for (int j = 0; j < 4; j++)
    {
        printf("Notas: %.2f\n", notas[j]);
    }
    float s = 0;
    for (int k = 0; k < 4; k++)
    {
        s += notas[k];
    }
    printf("Soma: %.2f\n", s);
    float m = s / 4;
    printf("media: %.2f\n", m);
}