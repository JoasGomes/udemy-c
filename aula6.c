#include <stdio.h>
#include <stdlib.h>

void main()
{

  // variáveis
  int a = 5, b = 10, c = 15;

  // maior
  if (a > 2)
  {
    printf("\n %d eh maior que 2", a);
  }

  // menor
  if (a < 10)
  {
    printf("\n %d eh menor que 10", a);
  }

  // maior ou igual
  if (c >= b)
  {
    printf("\n %d eh maior ou igual que %d", c, b);
  }

  // diferente
  if (c != 10)
  {
    printf("\n %d nao eh 10", c);
  }
}