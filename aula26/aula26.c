#include <stdio.h>;

// tipo string não existe em c, aspas simples caractere, aspas duplas string.
// string será um vetor com tamanho preestabelecido.

int main()
{

    char opcao;
    printf("informe uma opçao: \n");
    printf("a - saldo da conta. \n");
    printf("b - extrato da conta. \n");
    printf("c - limite da conta. \n");

    scanf("%c", &opcao);

    if (opcao == 'a')
    {
        printf("seu saldo e... \n");
    }
    else if (opcao == 'b')
    {
        printf("extrato da conta e...");
    }
    else if (opcao == 'c')
    {
        printf("seu limite e...");
    }
    else
    {
        printf("opcao desconhecida.");
    }

    // gerar um alfabeto completo com loop
    for (int i = 97; i <= 122; i++)
    {
        printf("%c\n", i);
    }

    // string
    char nome[50]; // 49 caracteres último caractere é \0.

    printf("qual é o seu nome? ");
    // forma de pegar uma string, não se usa scanf.
    gets(nome);

    printf("seu nome e %s", nome);

    return 0;
}