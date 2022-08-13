#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{

  // difine var
  int opcao;

  while (opcao < 1 || opcao > 3)
  {
    printf("escolha uma opcao:");
    printf("\n 1-opcao 1");
    printf("\n 2-opcao 2");
    printf("\n 3-opcao 3\n");

    // lendo a opcao
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("\n opcao 1 escolhida");
      break;
    case 2:
      printf("\n opcao 2 escolhida");
      break;
    case 3:
      printf("\n opcao 3 escolhida");
      break;
    default:
      printf("escolha uma opcao valida\n");
      break;
    }
  }
}