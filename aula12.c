#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
  int valor1, valor2, escolha;

  printf("digite dois valores: ");
  scanf("%d %d", &valor1, &valor2);

  printf("esse e o menu\n");
  printf("digite 1 para somar\n");
  printf("digite 2 para subtrair\n");
  printf("digite 3 para dividir\n");
  printf("digite 4 para multiplicar\n");

  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    printf("o resultado da soma e: %d ", valor1 + valor2);
    break;
  case 2:
    printf("o resultado da subtracao e: %d ", valor1 - valor2);
    break;
  case 3:
    printf("o resultado da divisao e: %d ", valor1 / valor2);
    break;
  case 4:
    printf("o resultado da multiplicacao e: %d ", valor1 * valor2);
    break;

  default:
    printf("opcao invalida");
    break;
  }
}