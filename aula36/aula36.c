#include <stdio.h>

int main()
{
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt", "w");

    if (arq)
    {
        printf("informe uma fruta, ou 0 para sair: \n");
        fgets(fruta, 10, stdin); // stdin = standard input -> entrada padrão
        while (fruta[0] != '0')
        {
            fputs(fruta, arq);
            printf("informe uma fruta, ou 0 para sair: \n");
            fgets(fruta, 10, stdin);
        }
    }
    else
    {
        printf("nao foi possivel criar o arquivo.");
    }

    fclose(arq);

    return 0;
}