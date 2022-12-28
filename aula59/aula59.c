#include <stdio.h>

void shell_sort(int vetor[], int tam)
{
    // variável auxiliar
    int grupo = 1;

    // gerar tamanho do grupo
    while (grupo < tam)
    {
        grupo = 3 * grupo + 1;
    }

    // varrer o vetor
    while (grupo > 1)
    {
        // dividir em 3 partes
        grupo /= 3;
        // varrendo cada grupo
        for (int i = grupo; i < tam; i++)
        {
            int troca = vetor[i];
            int j = i - grupo;
            // realiza troca
            while (j >= 0 && troca < vetor[j])
            {
                vetor[j + grupo] = vetor[j];
                j -= grupo;
            }
            // realiza a troca
            vetor[j + grupo] = troca;
        }
    }
}

int main()
{
    // vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    // função de ordenação
    shell_sort(vetor, 6);

    // mostrando vetor ordenado
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}