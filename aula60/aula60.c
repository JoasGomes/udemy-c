#include <stdio.h>

int busca_binaria(int vetor[], int chave, int tam)
{
    int inicio = 0;
    int fim = tam - 1;

    while (inicio <= fim)
    {
        // encontra o meio do vetor
        int meio = (inicio + fim) / 2;

        // se a chave estiver no meio, retornará
        if (chave == vetor[meio])
        {
            return meio;
        }

        // se a chave for menor que o valor do meio
        if (chave < vetor[meio])
        {
            fim = meio - 1;
        }
        else
        {
            inicio = meio + 1;
        }
    }
    // se não encontrar
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
    int ret = busca_binaria(vetor, chave, 6);

    printf("o elemento %d esta na posicao %d", chave, ret);

    return 0;
}