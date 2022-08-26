#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
  // variável string
  char palavra[10];
  char teste[] = {'b', 'c', 'r', 'a', 's'};
  char stringCompleta[] = "brasil";
  printf("%s", palavra);

  int i;

  for (i = 0; i < 5; i++)
  {
    printf("%c", teste[i]);
  }

  char palavra1[] = {'p', 'a', 'o', ' '};
  char palavre2[] = {'m', 'o', 'r', 't', 'a', 'd', 'e', 'l', 'a'};
  char novaPalavra[13];

  concatenarStrings(palavra1, 4, palavre2, 9, novaPalavra);

  int j;
  for (j = 0; j < 13; j++)
  {
    printf("%c", novaPalavra[i]);
  }

  // instrução
  printf("digite uma palavra:");

  // limpa o buffer
  setbuf(stdin, 0);

  // lê a string
  fgets(palavra, 255, stdin);

  // limpa as casas nao usadas
  palavra[strlen(palavra) - 1] = '\0';

  // [u] [h] [u] [ ] [ ] [ ] [ ] [ ] [ ] [\0]

  // imprime na tela
  printf("%s", palavra);
}

void concatenarStrings(char string1[], int t1, char string2[], int t2, char string3[])
{

  int k, l;

  for (k = 0; k < t1; k++)
  {
    string3[k] = string1[k];
  }

  for (l = 0; l < t2; l++)
  {
    string3[t1 + l] = string2[l];
  }
}