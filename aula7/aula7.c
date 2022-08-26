#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{

  // variáveis
  bool a = true, b = false;
  char letra = 'x';

  if (a)
  {
    printf("a eh verdadeiro\n");
  }

  if (b)
  {
    printf("b eh verdadeiro\n");
  }
  else
  {
    printf("b eh falso\n");
  }

  // comparando uma falsidade
  if (!b)
  {
    printf("b eh falso\n");
  }

  // condicionais com char
  if (letra == 'x')
  {
    printf("a letra eh x\n");
  }

  if (letra == 120)
  {
    printf("a letra eh x\n");
  }

  printf("o codigo da letra eh : %d", letra);
}