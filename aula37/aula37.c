#include <stdio.h>
#include <string.h>

// struct -> estrutura

struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} alunoExemplo;

int main()
{
    struct st_aluno aluno1;

    printf("informe a matricula do aluno: ");
    fgets(aluno1.matricula, 10, stdin);

    printf("informe o nome do aluno: ");
    fgets(aluno1.nome, 100, stdin);

    printf("informe o curso do aluno: ");
    fgets(aluno1.curso, 50, stdin);

    printf("informe o ano de nascimento do aluno: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("=========== dados do aluno ==========\n");

    printf("matricula: %s\n", aluno1.matricula);
    printf("nome: %s\n", aluno1.nome);
    printf("curso: %s\n", aluno1.curso);
    printf("ano de nascimento: %d\n", aluno1.ano_nascimento);
    return 0;
}