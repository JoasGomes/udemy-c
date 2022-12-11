#include <stdio.h>
#include <stdlib.h>

// alocação de memória - calloc

/*
 * qtd 3;
 * malloc
 * [3][66][99987502] -> valores(lixo) mantidos
 *
 *
 * calloc
 * [0][0][0] -> lixo é retirado(zera o espaço de memória)
 *
 */

int main()
{

    // alocação dinâmica
    int qtd, *p;

    printf("informe a quantidade de elementos: ");
    scanf("%d", &qtd); // 3

    // p = (int *)calloc(qtd, sizeof(int));
    p = (int *)malloc(qtd * sizeof(int));

    if (p)
    {
        /* for (int i = 0; i < qtd; i++)
        {
            printf("informe o valor para a posicao %d: \n", (i + 1));
            scanf("%d", &p[i]);
        }

        for (int i = 0; i < qtd; i++)
        {
            printf("no vetor 'p[%d]' esta o valor: %d \n", i, p[i]);
        } */

        // p[0] = 7;
        // p[1] = 3;
        // p[2] = 9;

        printf("a vetor ocupa %ld bytes", qtd * sizeof(int));
        printf("valor de p[0] = %d\n", p[0]);
        printf("valor de p[1] = %d\n", p[1]);
        printf("valor de p[2] = %d\n", p[2]);
    }
    else
    {
        printf("erro: memoria insuficiente");
    }

    // liberar a memória
    free(p); // -> aparecerá zero no malloc também
    p = NULL;

    return 0;
}