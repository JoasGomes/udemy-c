#include <stdio.h>
#include <string.h>

// operações com strings

// strcpy() = cópia de string
// strcat() = concatena strings
// strcmp() = comparar duas strings(se são diferentes)

// busca em string

// strchr() = localiza primeira ocorrência de caractere em uma string
// strtok() = divide uma string em sub-string com base em um caractere
// strlen() = retorna o tamanho da string

int main()
{

    char str1[20], str2[20], str3[20], str4[20];

    strcpy(str1, "quinta");
    strcpy(str2, "feira");

    strcat(str1, str2);

    printf("%s\n", str1);

    strcpy(str3, "laranja");
    strcpy(str4, "laranja");

    if (strcmp(str3, str4))
    {
        printf("nao sao iguais\n");
    }
    else
    {
        printf("sao iguais\n");
    }

    // strchr()
    char a[] = "pedro@gmail.com";
    char car = '@';

    char *ret = strchr(a, car);

    printf("a partir do %c esta %s\n", car, ret);

    // strtok()
    printf("usuario: %s\n", strtok(a, "@"));

    // strlen()
    printf("tamanho da string %d", strlen(a));

    return 0;
}