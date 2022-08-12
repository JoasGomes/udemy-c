#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
  int a = 1;
  char b = 'x';

  // código com if
  if (a == 1)
  {
    printf("\n opcao escolhida 1");
  }
  else if (a == 2)
  {
    printf("\n opcao escolhida 1");
  }
  else if (a == 3)
  {
    printf("\n opcao escolhida 3");
  }
  else
  {
    printf("\n opcao invalida");
  }

  // com switch
  switch (a)
  {
  case 1:
    printf("\n opcao escolhida: 1");
    break;
  case 2:
    printf("\n opcao escolhida: 2");
    break;
  case 3:
    printf("\n opcao escolhida: 3");
    break;
  default:
    printf("\n opcao invalida");
    break;
  }

  // switch com char
  switch (b)
  {
  case 'x':
    printf("\n opcao escolhida: x");
    break;
  case 'z':
    printf("\n opcao escolhida: z");
    break;
  case 'w':
    printf("\n opcao escolhida: w");
    break;
  default:
    printf("\n opcao invalida");
    break;
  }
}