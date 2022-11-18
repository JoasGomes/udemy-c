#include <stdio.h>

int main()
{
    int n1, n2, n3;

    scanf("%d%d%d", &n1, &n2, &n3);
    // maior dos 3
    if (n1 >= n2 && n1 >= n3)
    {
        printf("o maior numero dos 3 e: %d\n", n1);
    }
    if (n2 >= n1 && n2 >= n3)
    {
        printf("o maior numero dos 3 e: %d\n", n2);
    }
    if (n3 >= n1 && n3 >= n2)
    {
        printf("o maior numero dos 3 e: %d\n", n3);
    }
    // menor dos 3
    if (n1 <= n2 && n1 <= n3)
    {
        printf("o menor numero dos 3 e: %d\n", n1);
    }
    if (n2 <= n1 && n2 <= n3)
    {
        printf("o menor numero dos 3 e: %d\n", n2);
    }
    if (n3 <= n1 && n3 <= n2)
    {
        printf("o menor numero dos 3 e: %d\n", n3);
    }

    // negativos e positivos
    if (n1 > 0)
    {
        printf("%d e positivo\n", n1);
    }
    else
    {
        printf("%d e negativo\n", n1);
    }

    if (n2 > 0)
    {
        printf("%d e positivo\n", n2);
    }
    else
    {
        printf("%d e negativo\n", n2);
    }

    if (n3 > 0)
    {
        printf("%d e positivo\n", n3);
    }
    else
    {
        printf("%d e negativo\n", n3);
    }

    // pares e impares
    if (n1 % 2 == 0)
    {
        printf("%d e um numero par\n", n1);
    }
    else
    {
        printf("%d e um numero impar\n", n1);
    }

    if (n2 % 2 == 0)
    {
        printf("%d e um numero par\n", n2);
    }
    else
    {
        printf("%d e um numero impar\n", n2);
    }

    if (n3 % 2 == 0)
    {
        printf("%d e um numero par\n", n3);
    }
    else
    {
        printf("%d e um numero impar\n", n3);
    }

    return 0;
}