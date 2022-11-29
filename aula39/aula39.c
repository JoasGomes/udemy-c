#include <stdio.h>

// enum -> enumeração
// o valor da instância só poderá ser oq eu enumerei

enum dias_da_semana
{
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

int main()
{
    enum dias_da_semana d1, d2;

    int numeros[5];

    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    d1 = quinta;

    d2 = 4;

    if (d1 == d2)
    {
        printf("os dias sao iguais...\n");
    }
    else
    {
        printf("os dias não são iguais\n");
    }

    printf("numeros 0 = %d\n", numeros[0]);
    printf("numeros 1 = %d\n", numeros[1]);
    printf("numeros 2 = %d\n", numeros[2]);
    printf("numeros 3 = %d\n", numeros[3]);
    printf("numeros 4 = %d\n", numeros[4]);
    printf("numeros 14 = %d\n", numeros[14]); // aparece o local na memória

    return 0;
}