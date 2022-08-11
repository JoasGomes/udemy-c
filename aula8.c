#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{

  // crie um algoritmo que leia 3 notas e calcule a média entre elas
  // se o valor for maior que 7 informe que o aluno foi aprovado
  // senão foi reprovado
  float nota1, nota2, nota3, resultado;

  // método mais compacto
  /* printf("digite as 3 notas do aluno:");
  scanf("%f %f %f", &nota1, &nota2, &nota3); */

  // método mais longo
  printf("digite a primeira nota:");
  scanf("%f", &nota1);
  printf("digite a segunda nota:");
  scanf("%f", &nota2);
  printf("digite a terceira nota:");
  scanf("%f", &nota3);

  resultado = (nota1 + nota2 + nota3) / 3;

  if (resultado >= 7.0)
  {
    printf("aluno aprovado!\n");
    printf("a media dele foi:%.2f", resultado);
  }
  else
  {
    printf("aluno reprovado!\n");
    printf("a media dele foi:%.2f", resultado);
  }
}