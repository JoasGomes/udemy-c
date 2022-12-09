#include <stdio.h>
#include <ctype.h>

// teste de tipos de caracteres

// isalnum() = verifica se 0 caractere é um alfanumérico (abc123...)
// isalpha() = verifica se o caractere é um alfabético (abcde...)
// isdigit() = verifica se o caractere é um digito decimal (01234...)
// ispunct() = verifica se o caractere é uma pontuação (?!.)
// isspace() = verifica se é espaço
// isupper() = se é maiúscula
// islower() = se é minúscula
// tolower() = converte pra minúscula
// toupper() = converte pra maiúscula

int main()
{
    char teste = 'c';

    if (isalnum(teste))
    {
        printf("e alfanumérico\n");
    }
    else
    {
        printf("nao e alfanumerico\n");
    }

    if (isalpha(teste))
    {
        printf("e alfabetico\n");
    }
    else
    {
        printf("nao e alfabetico\n");
    }

    if (isdigit(teste))
    {
        printf("e um digito\n");
    }
    else
    {
        printf("nao e um digito\n");
    }

    if (ispunct(teste))
    {
        printf("e uma pontuacao\n");
    }
    else
    {
        printf("nao e uma pontuacao\n");
    }

    if (isspace(teste))
    {
        printf("e um espaco em branco\n");
    }
    else
    {
        printf("nao e um espaco em branco\n");
    }

    if (islower(teste))
    {
        printf("e minusculo\n");
    }
    else
    {
        printf("nao e minusculo\n");
    }

    printf("a letra %c em maiusculo e %c", teste, toupper(teste));
    printf("a letra %c em minusculo e %c", teste, tolower(teste));

    return 0;
}