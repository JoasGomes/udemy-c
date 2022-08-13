#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{

  int valor1;
  printf("digite um numero:");
  scanf("%d", &valor1);

  if (valor1 % 2 == 0)
  {
    printf("o numero e par\n");
  }
  else
  {
    printf("o numero e impar\n");
  }

  int i;

  // jeito 1
  for (i = 10; i <= 20; i = i + 2)
  {
    printf("%d\n", i);
  }

  // jeito 2
  for (i = 10; i <= 20; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
  }

  // testando valor primos
  int j, num, aux = 0;

  printf("digite um valor para saber se e primo:");
  scanf("%d", &num);

  for (j = 1; j <= num; j++)
  {
    // conserindo quantas vezes houve divisao
    if (num % i == 0)
    {
      aux++;
    }
    // exibe o resto da divisao na tela
    printf("%d / %d tem o resto = %d\n", num, j, num % j);
  }

  if (aux == 2)
  {
    printf("o numero e primo");
  }
  else
  {
    printf("o numero nao e primo");
  }
}