#include <stdio.h>
#include <stdlib.h>

void main()
{
  // definindo variável
  int a = 5, b;
  // imprimindo um inteiro da var "a" na tela
  printf("%d\n", a);

  // concatenando
  printf("o valor da var a eh: %d\n", a);

  // mudando o valor de a
  a = 15;

  // concatenando com novo valor de a
  printf("o valor da var a eh: %d\n", a);

  // lendo valores
  scanf("%d", &b);

  // concatenando com novo valor de a
  printf("o valor da var b eh: %d\n", b);

  // imprimindo
  printf("uhuu\n");

  // pausando
  system("pause");
}