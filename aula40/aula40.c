#include <stdio.h>

// recursividade

// ato da função chamar ela mesma
// importante ter condição de parada

// variável global
// int contador = 1;

// sequencia fibonacci 1 1 2 3 5 8 13...
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int qtd;

    printf("informe o tamanho da sequencia fibonacci:");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("%d", fib(i + 1));
    }

    // printf("imprimindo algo... %d\n", contador);
    // contador = contador + 1;

    // ter cuidado por conta do loop infinito
    // main();

    return 0;
}