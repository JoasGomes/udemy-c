#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 10

void main()
{
  // acessando a constante
  printf("%d\n", TAM);

  int i;

  // contagem até 10
  for (i = 1; i < TAM; i++)
  {
    printf("%d\n", i);
  }

  // regressivo com for
  int cont;

  for (cont = 10; cont >= 0; cont--)
  {
    printf("%d\n", cont);
  }

  // regressivo com while
  int contador = 10;

  while (contador >= 0)
  {
    printf("%d \n", contador);
    contador--;
  }

  // regressivo com do while
  int j = 10;

  do
  {
    printf("%d \n", i);
    j--;
  } while (j >= 0);
}