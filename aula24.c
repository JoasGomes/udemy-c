#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
  /*
    1.escreva um algoritmo que recebe um preço,calcule
    e mostre o novo preço com desconte de 10%
  */

  float precoProduto;
  printf("digite o preco do produto:\n ");
  scanf("%f", &precoProduto);

  float desconto = precoProduto * 0.1;
  float valorComDesconto = precoProduto - desconto;

  printf("seu desconto e de : %f\n", desconto);
  printf("e seu produto com desconto ficou: %f\n", valorComDesconto);

  /*
    2. escreva um algoritmo que calcule o imc de uma pessoa,
    imc= (peso(em kg)/altura(metros)) * 2
  */

  float peso;
  float altura;
  printf("informe seu peso(em kg):\n ");
  scanf("%f", &peso);
  printf("informe sua altura(em metros):\n ");
  scanf("%f", &altura);

  float imc = peso / pow(altura, 2);
  printf("seu imc e de: %2.f\n", imc);

  system("pause");
  return 0;
}