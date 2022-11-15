#include <stdio.h>;

// binários

int main()
{
    int valor = 2;

    printf("valor vale %d\n", valor);

    // deslocamento de bits para a esquerda
    valor = valor << 2;
    printf("valor vale %d", valor);

    valor = 2;
    // deslocamento de bits para a direita
    valor = valor >> 1;
    printf("valor vale %d", valor);

    // negação
    valor = 2;
    valor = ~valor;
    printf("valor vale %d\n", valor);

    return 0;
}