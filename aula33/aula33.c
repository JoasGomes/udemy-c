#include <stdio.h>

int main()
{

    int n;  // variável guarda um valor na memória
    int *p; // ponteiro é um valor que aponta para end de memória

    printf("informe um numero: ");
    scanf("%d", &n);

    // inicializando o ponteiro
    p = &n;

    printf("o numero foi %d\n", n);

    printf("endereco de memoria: %d\n", &n);

    // será o mesmo valor que endereco de memoria, porém em hexadecimal
    printf("endereco do ponteiro: %p\n", p);

    return 0;
}