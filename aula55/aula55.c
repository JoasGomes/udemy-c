#include <stdio.h>
#include <stdlib.h>

// Árvore Binária

/*
- raiz = primeiro elemento(onde se original tudo)
- elementos binários = cada elemento só pode ser ligado a no máx outros 2 elementos
- folhas = elementos sem ligação com outros(últimos da árvore)
- arestas = ligações que cada elemento tem
- quando não tem aresta ela aponta pra nulo
*/

struct st_arvore
{
    int valor;
    struct st_arvore *sad; // sub-arvore direita
    struct st_arvore *sae; // sub-arvore esquerda
};

typedef struct st_arvore arvore;

arvore *criaArvore()
{
    return NULL;
}

int arvoreEstaVazia(arvore *t)
{
    return t == NULL;
}

void mostrarArvore(arvore *t)
{
    printf("<");
    if (!arvoreEstaVazia(t))
    {
        printf("%d", t->valor);
        mostrarArvore(t->sae);
        mostrarArvore(t->sad);
    }
    printf(">");
}

void insereDadoArvore(arvore **t, int num)
{
    if (*t == NULL)
    {
        *t = (arvore *)malloc(sizeof(arvore));
        (*t)->sae = NULL;
        (*t)->sad = NULL;
        (*t)->valor = num;
    }
    else
    {
        if (num < (*t)->valor)
        {
            insereDadoArvore(&(*t)->sae, num);
        }
        if (num > (*t)->valor)
        {
            insereDadoArvore(&(*t)->sad, num);
        }
    }
}

int estaNaArvore(arvore *t, int num)
{
    if (arvoreEstaVazia(t))
    {
        return 0;
    }

    return t->valor == num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}

int main()
{
    arvore *t = criaArvore();

    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);

    mostrarArvore(t);

    if (arvoreEstaVazia(t))
    {
        printf("\n\narvore vazia!\n");
    }
    else
    {
        printf("\n\narvore nao vazia\n");
    }

    if (estaNaArvore(t, 15))
    {
        printf("\n elemento 15 pertence a arvore\n");
    }
    else
    {
        printf("\n elemento 15 nao pertence a arvore\n");
    }

    if (estaNaArvore(t, 23))
    {
        printf("\n elemento 23 pertence a arvore\n");
    }
    else
    {
        printf("\n elemento 23 nao pertence a arvore\n");
    }

    free(t);

    return 0;
}