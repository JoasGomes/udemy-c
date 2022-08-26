#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 3

void main()
{
  // declarando vetor(array)
  int vetor[3], cont;

  // colocando valores nas posições
  vetor[0] = 5;
  vetor[1] = 10;
  vetor[2] = 15;

  // exibindo os valores
  printf("\n posicao 0: %d", vetor[0]);
  printf("\n posicao 1: %d", vetor[1]);
  printf("\n posicao 2: %d", vetor[2]);

  // imprimindo valor em um laço de repetição
  for (cont = 0; cont < 3; cont++)
  {
    printf("\nposicao%d : %d", cont, vetor[cont]);
  }

  // lendo 3 valores para o vetor
  for (cont = 0; cont < TAM; cont++)
  {
    scanf("%d", &vetor[cont]);
  }
}