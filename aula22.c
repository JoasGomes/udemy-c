#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
  // char palavra[6] = {'b', 'r', 'a', 's', 'i', 'l'};
  // char palavra[] = {'b', 'r', 'a', 's', 'i', 'l'};
  // char palavra[7] = {"brasil"};
  // char palavra[] = {"brasil"};
  char palavra[] = "brasil";

  // \0 fica na última posição quando se trata de ler %s
  // \0 é apena um caractere e indica final da string
  printf("%s\n", palavra);

  int tamanhoString(char string[]);
  char stringUsuario[20];

  printf("digite uma palavra(string):\n");
  scanf("%s", stringUsuario);

  int num = tamanhoString(stringUsuario);

  printf("a string %s possui %i caracteres\n", stringUsuario, num);

  system("pause");
  return 0;
}

int tamanhoString(char string[])
{

  int numCaracteres = 0;

  while (string[numCaracteres] != '\0')
  {
    ++numCaracteres;
  }
  // caractere nulo
  ++numCaracteres;
  return numCaracteres;
}