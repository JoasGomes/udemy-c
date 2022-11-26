#include <stdio.h>

// * vai indicar que quero o valor contido no endereço
void incrementa(int *valor)
{
    printf("antes de incrementar\n");
    printf("o contador vale %d\n", (*valor));      // valor
    printf("o endereco de memoria e %d\n", valor); // endereço de memória

    printf("depois de incrementar\n");
    printf("o contador vale %d\n", ++(*valor));
    printf("o endereco de memoria e %d\n", valor);
}

int main()
{
    // alocado na memória
    int contador = 10;

    printf("antes de incrementar\n");
    printf("o contador vale %d\n", contador);
    printf("o endereco de memoria e %d\n", &contador);

    // ta passando apenas a cópia do contador
    // incrementa(contador);
    // passando o endereço de memória
    incrementa(&contador);

    printf("depois de incrementar\n");
    printf("o contador vale %d\n", contador);
    printf("o endereco de memoria e %d\n", &contador);

    return 0;
}