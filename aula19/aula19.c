#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
  float vetor[3];
  int i;

  // jeito 1
  for (i = 0; i < 3; i++)
  {
    printf("digite um valor:");
    scanf("%f", &vetor[i]);
  }
  for (i = 0; i < 3; i++)
  {
    printf("\nvetor[%d] = %.2f", i, vetor[i]);
  }

  // jeito 2
  printf("digite um valor");
  scanf("%f", &vetor[0]);
  printf("digite um valor");
  scanf("%f", &vetor[1]);
  printf("digite um valor");
  scanf("%f", &vetor[2]);

  printf("\nvetor[0] = %.2f", vetor[0]);
  printf("\nvetor[1] = %.2f", vetor[1]);
  printf("\nvetor[2] = %.2f", vetor[2]);

  printf("\na media dos valores e: %.2f", (vetor[0] + vetor[1] + vetor[2]) / 3);
}