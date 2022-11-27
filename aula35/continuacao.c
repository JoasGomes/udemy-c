#include <stdio.h>

// FILE == arquivo

int main()
{

    FILE *arq;

    int num, resultado, soma = 0;

    arq = fopen("arquivo2.txt", "r");

    if (arq)
    {
        while (!feof(arq))
        {
            resultado = fscanf(arq, "%d", &num);
            printf("resultado: %d\n", resultado);
            if (resultado == 1)
            {
                soma = soma + num;
            }
        }
    }
    else
    {
        printf("nao achei o arquivo");
    }

    printf("a soma dos numeros encontrados e %d", soma);
    fclose(arq);

    return 0;
}