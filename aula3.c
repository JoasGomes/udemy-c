#include <stdio.h>
#include <stdlib.h>

void main()
{

  // definindo variáveis
  int a = 6, b = 3;

  // soma
  printf("a soma de a e b = %d\n", a + b);
  printf("a soma de %d e %d = %d\n", a, b, a + b);

  // subtração
  printf("a subtracao de a e b = %d\n", a - b);
  printf("a subtracao de %d e %d = %d\n", a, b, a - b);

  // divisão
  printf("a divisao de a e b = %d\n", a / b);
  printf("a divisao de %d e %d = %d\n", a, b, a / b);

  // multiplicação
  printf("a multiplicacao de a e b = %d\n", a * b);
  printf("a multiplicacao de %d e %d = %d\n", a, b, a * b);

  // resto da divisão
  printf("o resto da divisao de %d e %d = %d\n", a, b, a % b);

  // valor absoluto
  printf("o valor absoluto de -3 = %d\n", abs(-3));
}