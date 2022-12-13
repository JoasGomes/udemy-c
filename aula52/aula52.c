#include <stdio.h>

#define TAMFILA 10

// Fila / Queue

/*
- fila de banco
- elemento que entrar primeiro, sai primeiro
- sempre que um elemento é add na fila, vai pro final dela
- sempre que removemos um, será o primeiro

FIFO - First In / First Out

enqueue() = adiciona elemento na fila

dequeue() = remove o elemento da fila

clear() = limpa a fila

ESTRUTURA DA FILA
fila[10] - [0][1][2][3][4][5][6][7][8][9]
head -> cabeça da fila, indica quem é o primeiro da fila
tail -> calda, indica quantos elementos tem na fila

aplicação: qualquer situação de atendimento de elementos

*/

int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; // próximo a ser atendido
int tail = 0; // último da fila

void lista_elementos()
{
    printf("=========FILA ATUAL==========\n");
    for (int i = 0; i < TAMFILA; i++)
    {
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("Head: %d\n", head);
    printf("Tail: %d\n", tail);
    printf("\n\n");
}

void enqueue()
{
    int val;
    if (tail < TAMFILA)
    {
        printf("informe o elemento para adicionar a fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail = tail + 1;
        lista_elementos();
    }
    else
    {
        printf("a fila está cheia!\n");
    }
}

void dequeue()
{
    if (head < tail)
    {
        fila[head] = 0;
        head = head + 1;
        lista_elementos();
    }
    else
    {
        printf("a fila está vazia\n");
    }
}

void clear()
{
    for (int i = 0; i < TAMFILA; i++)
    {
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
}

int main()
{

    int opcao = 0;

    do
    {
        printf("selecione a opcao: \n\n");
        printf("[1] - inserir (enqueue): \n");
        printf("[2] - remover (dequeue): \n");
        printf("[3] - listar: \n");
        printf("[4] - limpar (clear): \n");
        printf("[-1] - sair. \n");
        printf("opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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
            printf("opcao invalida");
        }
    } while (opcao != -1);

    return 0;
}