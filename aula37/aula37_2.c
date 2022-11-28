#include <stdio.h>
#include <string.h>

// struct -> estrutura

struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} alunos[5]; // 0...4

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("informe a matricula do aluno: ");
        fgets(alunos[i].matricula, 10, stdin);

        printf("informe o nome do aluno: ");
        fgets(alunos[i].nome, 100, stdin);

        printf("informe o curso do aluno: ");
        fgets(alunos[i].curso, 50, stdin);

        printf("informe o ano de nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("=========== dados do aluno %d ==========\n", (i + 1));
        printf("matricula: %s\n", alunos[i].matricula);
        printf("nome: %s\n", alunos[i].nome);
        printf("curso: %s\n", alunos[i].curso);
        printf("ano de nascimento: %d\n", alunos[i].ano_nascimento);
    }

    return 0;
}