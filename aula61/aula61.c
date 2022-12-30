#include <stdio.h>

int busca_linear(int vetor[], int chave, int tam)
{

    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] == chave)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    // vetor ja ordenado
    int vetor[6] = {1, 3, 5, 9, 12, 35};

    // elemento que queremos encontrar no vetor
    int chave = 9;

    // aplicando a busca binária

    // vetor, chave, tamanho do vetor
    int ret = busca_linear(vetor, chave, 6);

    printf("o elemento %d esta na posicao %d", chave, ret);

    return 0;
}