#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// coversão de strings

// atof() = converte string para double
// atoi() = coverte string para inteiro
// atol() = coverte string para inteiro longo

// geração de sequência pseudo-aleatória

// rand() = gera número aleatório
// srand() = inicializa o gerador de números aleatórios

// gerenciamento de memória dinâmica

// malloc()
// calloc()
// free()
// realoc()

// pesquisa e ordenação

// qsort() = ordena elementos de uma array

// aritmética de inteiros

// abs() = valor absoluto
// div() = divisão inteira

int compara(int *x, int *y)
{
    if (*x > *y)
    {
        return 1;
    }
    else if (*x == *y)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{

    char valor_s[5];
    double valor_d;
    int valor_i;
    double valor_li;

    strcpy(valor_s, "4.5");

    valor_d = atof(valor_s);
    valor_i = atoi(valor_s);
    valor_li = atol(valor_s);

    printf("o valor e: %.2f\n", valor_d);
    printf("o valor e: %d\n", valor_i);
    printf("o valor e: %lf\n", valor_li);

    // rand()
    // srand()
    time_t t;

    // inicializar o gerador
    srand((unsigned)time(&t));

    // gerar 6 números de 0 a 60
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", rand() % 61);
    }

    // qsort()
    int numeros[] = {6, 2, 3, 4, 5, 8, 7};

    qsort(numeros, 7, sizeof(int), (void *)compara);

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", numeros[i]);
    }

    div_t saida;

    saida = div(27, 4);
    printf("o quociente de (27/4) e %d\n", saida.quot);
    printf("o resto de (27/4) e %d\n", saida.rem);

    saida = div(27, 3);
    printf("o quociente de (27/3) e %d\n", saida.quot);
    printf("o resto de (27/3) e %d\n", saida.rem);

    return 0;
}