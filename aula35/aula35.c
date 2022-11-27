#include <stdio.h>

// FILE == arquivo

int main()
{

    FILE *arq;
    char c;
    char nome[10], *resultado;

    // fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)

    // w - abrir o arquivo para escrita(se não existir será criado)
    //(se existir será feito um novo do 0)

    // r - abrir apenas para leitura(sem modificações)

    // wa - abrir para adição de conteudo
    arq = fopen("arquivo.txt", "r");

    if (arq)
    {
        printf("achei o arquivo\n");
        /* while ((c = getc(arq)) != EOF) // EOF = End Of File
        {
            printf("%c", c);
        } */
        while (!feof(arq))
        {
            resultado = fgets(nome, 10, arq);
            printf("resultado: %d\n", resultado);
            if (resultado)
            {
                printf("%s\n", nome);
            }
        }
    }
    else
    {
        printf("nao achei o arquivo");
    }

    // sempre que manipular devemos fecha-lo
    fclose(arq);

    return 0;
}