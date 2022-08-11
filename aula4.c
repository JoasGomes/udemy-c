#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // para usar acentos
  setlocale(LC_ALL, "");

  // crie um algoritmo que leia 2 notas e mostre a média
  float a, b;
  printf("digite a primeira nota:");
  scanf("%f", &a);
  printf("digite a segunda nota:");
  scanf("%f", &b);

  printf("essa e a media entre a e b e: %f", (a + b) / 2);

  // crie um algoritmo que leia 2 notas e mostre diferença absoluta
  int c, d;
  printf("digite a primeira nota:");
  scanf("%d", &c);
  printf("digite a segunda nota:");
  scanf("%d", &d);

  printf("esse e o valor absoluto de c e d: %d", abs(c - d));

  // algoritmo que le 3 números inteiros de uma vez
  int nota1, nota2, nota3, resultado;

  // modo 1
  /* printf("digite a primeira nota:");
  scanf("%d", &nota1);
  printf("digite a segunda nota:");
  scanf("%d", &nota2);
  printf("digite a terceira nota:");
  scanf("%d", &nota3);
  resultado = nota1 * nota2 * nota3; */

  // modo2
  printf("digite as notas:");
  scanf("%d %d %d", &nota1, &nota2, &nota3);
  resultado = nota1 * nota2 * nota3;

  printf("esse e o resultado da multiplicacao: %d", resultado);
}