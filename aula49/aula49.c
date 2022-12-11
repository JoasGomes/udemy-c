#include <stdio.h>
#include <stdlib.h>

// alocação dinâmica - malloc

int main()
{

    // alocação estática
    int numeros[3];
    /* numeros[0] = 55;
       numeros[1] = 44;
       numeros[2] = 33; */

    for (int i = 0; i < 3; i++)
    {
        printf("informe o valor para a posicao %d: ", (i + 1));
        scanf("%d", &numeros[i]);
    }

    printf("a variavel 'numero[0]' vale %d e ocupa %ld bytes\n", numeros[0], sizeof(numeros[0]));
    printf("a variavel 'numero[1]' vale %d e ocupa %ld bytes\n", numeros[1], sizeof(numeros[1]));
    printf("a variavel 'numero[2]' vale %d e ocupa %ld bytes\n", numeros[2], sizeof(numeros[2]));
    printf("a vetor ocupa %ld bytes", sizeof(numeros));

    // alocação dinâmica
    int qtd, *p;

    printf("informe a quantidade de elementos: ");
    scanf("%d", &qtd); // 3

    int bytes = qtd * sizeof(int);

    p = (int *)malloc(bytes); // 3 X 4 == 12 bytes

    for (int i = 0; i < qtd; i++)
    {
        printf("informe o valor para a posicao %d: \n", (i + 1));
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("no vetor 'p[%d]' esta o valor: %d \n", i, p[i]);
    }
    printf("a vetor ocupa %ld bytes", qtd * sizeof(int));

    // liberar a memória
    free(p);
    p = NULL;

    return 0;
}