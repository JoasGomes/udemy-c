#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{

  // difine variável
  int a = 1, b = 10;

  // contando até 10
  while (a <= 10)
  {
    // imprime 'a' na tela
    printf("\n %d", a);

    // incremento
    a++;
  }

  // contagem regressiva
  while (b >= 1)
  {
    // imprime 'b' na tela
    printf("\n %d", b);

    // decremento
    b--;
  }

  // do while
  do
  {
    printf("\n%d", a);
    a++;
  } while (a <= 10);
}