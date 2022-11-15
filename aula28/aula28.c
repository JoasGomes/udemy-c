#include <stdio.h>;

// matrizes

int main()
{

    char nome[3][50];
    for (int i = 0; i < 3; i++)
    {
        printf("qual seu nome? ");
        gets(nome[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("ola %s\n", nome[i]);
    }

    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 1;
    numeros[1][0] = 1;
    numeros[1][1] = 1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("numeros [%d][%d] vale %d\n", i, j, numeros[i][j]);
        }
    }

    float valores[5][5];

    return 0;
}