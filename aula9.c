#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
  int a = 10;

  // conectivo e ou and: as duas precisam ser verdade
  if (a > 5 && a < 15)
  {
    printf("\n a variavel a esta entre 5 e 15");
  }

  // conectivo ou: se pelo menos uma for verdade
  if (a > 5 || a > 15)
  {
    printf("\n a variavel a ou eh maior que 5 ou 15");
  }

  // misturando conectivos
  if ((a > 5 && a < 15) || a == 20)
  {
    printf("\n a variavel a ou eh maior que 5 ou 15 ou vale 20");
  }
}