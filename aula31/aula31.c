#include <stdio.h>

/*
- tipo de retorno
- nome
- parâmetro (opcional)
- implementação
- retorno (opcional)
*/

int main()
{
    mensagem("joas");
    int retorno = soma(5, 6);
    printf("retorno = %d\n", retorno);

    char cara = 'a';
    prox_char(cara);

    int n1, n2, ret;
    printf("informe o primeiro numero:\n ");
    scanf("%d", &n1);

    printf("informe o segundo numero:\n ");
    scanf("%d", &n2);

    ret = soma(n1, n2);

    printf("a soma de %d com %d e %d\n", n1, n2, ret);

    return 0;
}

void mensagem(char nome[])
{
    printf("bem-vindo!\n");
    printf("bem-vindo %s\n", nome);
}

int soma(int n1, int n2)
{
    return n1 + n2;
}

// 'a' + 1 = 'b'
// '97'
void prox_char(char caractere)
{
    printf("%c\n", caractere + 1);
}