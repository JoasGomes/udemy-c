#include <stdio.h>
#include <string.h>

// a union separa e utiliza apenas o espaço da maior variável
union pessoa
{
    char nome[100];
    int idade;
};

int main()
{

    union pessoa pes;

    strcpy(pes.nome, "joas vitor");
    printf("dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("ele tem %d anos\n", pes.idade);

    printf("a variavel 'pes' esta ocupando %ld bytes", sizeof(pes));

    int numero = 42;
    float nota = 7.9;
    char letra = 'd';
    double outraNota = 19.4;

    printf("a variavel 'numero' tem valor %d e ocupa %ld bytes\n", numero, sizeof(numero));
    printf("a variavel 'nota' tem valor %.2f e ocupa %ld bytes\n", nota, sizeof(nota));
    printf("a variavel 'letra' tem valor %c e ocupa %ld bytes\n", letra, sizeof(letra));
    printf("a variavel 'outraNota' tem valor %.2f e ocupa %ld bytes\n", outraNota, sizeof(outraNota));

    return 0;
}