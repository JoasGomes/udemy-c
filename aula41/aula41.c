#include <stdio.h>

// ifndef - diretiva de compilação
// se NÃO estiver definido,faça algo
#ifndef PI
#define PI 3.141592 // constante
#endif

// ifdef - diretiva de compilação
// se ESTIVER definido, faça algo

int main()
{
    int valor = 5; // variável

    valor = 456;

    printf("o valor e %d\n", valor);

    printf("PI vale %f\n", PI);

#ifdef PI
    printf("o valor de PI e %f\n", PI);
#endif

    int qtd, soma = 0;

    printf("quantos numeros voce quer somar ? ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++)
    {
        soma = soma + i * 2 + 3;
    }

    printf("a soma e: %d", soma);

    return 0;
}