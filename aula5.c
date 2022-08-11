#include <stdio.h>
#include <stdlib.h>

// função principal do programa
void main()
{

  // definindo variáveis
  int a = 5, opcao = 1;
  float b = 2.5;
  char c = 'x';

  // condicional
  if (a == 5)
  {
    printf("a variavel e igual a 5\n");
  }

  if (b == 2.5)
  {
    printf("a variavel e igual a 2.5\n");
  }

  if (c == 'x')
  {
    printf("a variavel e igual a x\n");
  }

  if (a % 2 == 1)
  {
    printf("a variavel a eh impar\n");
  }
  else
  {
    printf("a variavel a eh par");
  }

  // composta
  if (opcao == 1)
  {
    printf("opcao = 1\n");
  }
  else if (opcao == 2)
  {
    printf("opcao = 2\n");
  }
  else
  {
    printf("opcao nao eh 1 nem 2");
  }

  // para o programa após a execução
  system("pause");
}