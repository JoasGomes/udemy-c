#include <stdio.h>

#define TAMPILHA 10

// Pilha / Stack

/*
FILO = First in / Last out

- os dados são inseridos sempre no topo
- novo elemento inserido ocupa o topo da pilha
- só temos acesso ao elemento que esta no topo
- o processo de inserir um elemento é chamado de push
- o processo de remover elemento é chamado de pop

*/

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos()
{
    printf("===========PILHA ATUAL===========\n");
    for (int i = 0; i < TAMPILHA; i++)
    {
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\nTopo: %d", topo);
    printf("\n\n");
}

void push()
{
    int val;
    printf("informe o valor: ");
    scanf("%d", &val);
    if (topo < TAMPILHA)
    {
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }
    else
    {
        printf("pilha ja esta cheia...\n");
    }
}

void pop()
{
    if (topo >= 0)
    {
        pilha[topo - 1] = 0;
        topo = topo - 1;
        lista_elementos();
    }
    else
    {
        printf("Pilha sem elementos...\n");
    }
}

void clear()
{
    for (int i = 0; i < TAMPILHA; i++)
    {
        pilha[i] = 0;
    }
    topo = 0;
}

int main()
{
    int opcao = 0;

    do
    {
        printf("Selecionae a opcao: \n\n");
        printf("[1] - Inserir (push): \n");
        printf("[2] - Remover (pop): \n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpar a pilha: \n");
        printf("[-1] - Sair. \n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("Opção invalida");
        }

    } while (opcao != -1);

    return 0;
}