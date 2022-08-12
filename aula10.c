#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
  int lado1, lado2, lado3;

  printf("digite os lados do triangulo:");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  if (lado1 == lado2 && lado2 == lado3)
  {
    printf("parabens! triangulo equilatero formado");
  }
  else
  {
    if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
      printf("pelo menos dois lados sao iguais mas nao todos\n");
    }
    printf("infelizmente nao posso formar o triangulo equilatero");
  }
}