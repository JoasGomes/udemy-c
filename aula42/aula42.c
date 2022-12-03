#include <stdio.h>

// <stdio.h> --> funções de entrada e saída

// acesso a arquivos:

// fclose() = fechar arquivo
// fflush() = limpar buffer
// fopen() = abrir arquivo

// entradas e saidas formatadas:

// fscanf() = scanf dentro de um arquivo
// printf() = impressão de algo na tela
// scanf() = entrada de dado no teclado

// entrada e saída de caracteres:

// getc() = pegando caracteres em um arquivo
// fputs() = inserindo texto em um arquivo
// getchar() = corrigir um bug ou receber caractere
// fgets() = pega string e numero de caracteres

// tratamento de erros:

// feof() = ate o fim do arquivo

// tipos e macros:

// FILE = tipo para declarar arquivo ou ponteiro pra ele
// EOF = declara o fim do arquivo (end of file)
// NULL = declara anulação de algo

int main()
{

    // exemplo do bug do windows
    int num1, num2, soma;

    printf("informe o num1: ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("informe o num2: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("a soma de %d com %d e %d", num1, num2, soma);

    return 0;
}