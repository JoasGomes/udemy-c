#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
  /*
    escreva um algoritmo que armazena 10 em A e 20 em B,
    em seguida troque os valores dela e mostre.
  */

  int a = 10;
  int b = 20;
  int c;

  c = a;
  a = b;
  b = c;

  printf("%d\n", a);
  printf("%d\n", b);

  /*
    escreva um algoritmo que le um valor do teclado e escreve
    na tela seu sucessor e antecessor
  */

  int valor;

  printf("informe o valor: ");
  scanf("%d", &valor);

  int antecessor = valor - 1;
  int sucessor = valor + 1;

  printf("sucessor = %d e antecessor = %d\n", sucessor, antecessor);

  /*
    escreva um algoritmo que le os valores de base e altura de um
    triangulo e escreva a area dele
  */

  float alturaT;
  float baseT;

  printf("informe a altura do triangulo: \n");
  scanf("%f", &alturaT);
  printf("informe a base do triangulo: \n");
  scanf("%f", &baseT);

  float areaT = (alturaT * baseT) / 2;
  printf("a area do triangulo e: %.2f\n", areaT);

  system("pause");
  return 0;
}