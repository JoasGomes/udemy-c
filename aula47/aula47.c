#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char genero[20];
    int dia;
    int mes;
    int ano;
} Pessoa;

void media(Pessoa *pont)
{
    int soma = 0;
    int media;
    for (int i = 0; i < 5; i++)
    {
        soma = soma + pont[i].ano;
    }

    media = abs((soma / 5) - 2022);
    printf("A media das idades e: %d anos\n", media);
}

void maiorIdade(Pessoa *pont)
{
    int idades[5];
    for (int i = 0; i < 5; i++)
    {
        idades[i] = abs((pont[i].ano - 2022));
    }

    int maior = 0;
    for (int i = 0; i < 5; i++)
    {
        if (idades[i] > maior)
        {
            maior = idades[i];
        }
    }

    printf("a maior idade dentre todos e: %d\n", maior);
}

void mediaMulherHomem(Pessoa *pont)
{
    int idadesMasculinas = 0;
    int idadesFemininas = 0;
    int mediaFe;
    int mediaMa;
    char aux1[4] = "mas";
    char aux2[4] = "fem";
    int acM = 0;
    int acF = 0;

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(pont[i].genero, aux1) == 0)
        {
            idadesMasculinas = idadesMasculinas + abs(pont[i].ano - 2022);
            acM = acM + 1;
        }
        if (strcmp(pont[i].genero, aux2) == 0)
        {
            idadesFemininas = idadesFemininas + abs(pont[i].ano - 2022);
            acF = acF + 1;
        }
    }

    mediaMa = (idadesMasculinas / acM);
    mediaFe = (idadesFemininas / acF);

    printf("A idade media masculina e: %d\n", mediaMa);
    printf("A idade media feminina e: %d\n", mediaFe);
}

int main()
{
    Pessoa pessoas[5];
    Pessoa *pont = pessoas;

    for (int i = 0; i < 5; i++)
    {
        printf("qual genero da %d pessoa no formato (mas) ou (fem): ", (i + 1));
        scanf("%s", pessoas[i].genero);
        printf("digite a data de nascimento da %d pessoa no formato (dd mm aa): \n", (i + 1));
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
    }

    media(pont);
    maiorIdade(pont);
    mediaMulherHomem(pont);

    return 0;
}