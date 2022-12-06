#include <stdio.h>
#include <math.h>

// funções matemáticas

// funções trigonométricas

// cos() = calcula o cosseno de um ângulo em radianos
// sin() = calcula o seno de um ângulo em radianos
// tang() = calcula a tangente de um ângulo em radianos

// funções hiperbólicas

// cosh() = calcula o coseno hiperbólico
// sinh() = calcula o seno hiperbólico
// tanh() = calcula a tangente hiperbólica

// funções exponenciais e logarítmicas

// exp() = função exponencial
// log() = logaritmo natural
// log10() = logaritmo na base 10

// funções de potência

// pow() = retorna a base elevada ao expoente
// sqrt() = raiz quadrada de um número

// funções de arredondamento

// ceil() = arredonda para cima
// floor() = arredonda para baixo
// abs() = valor absoluto de um número(módulo)

int main()
{
    // cos()
    // sin()
    // tang()
    int angulo = 45;

    float res = cos(angulo);
    float res2 = sin(angulo);
    float res3 = tan(angulo);

    printf("o coseno de %d e %f\n", angulo, res);
    printf("o seno de %d e %f\n", angulo, res2);
    printf("o tangente de %d e %f\n", angulo, res3);

    // exp()
    double a = 0;
    double b = 1;
    double c = 2;

    printf("o exponencial de %lf e %lf\n", a, exp(a));
    printf("o exponencial de %lf e %lf\n", b, exp(b));
    printf("o exponencial de %lf e %lf\n", c, exp(c));

    // log()
    // log10()
    int valor = 42;

    printf("o log de %d e %lf\n", valor, log(valor));
    printf("o log base 10 de %d e %lf\n", valor, log10(valor));

    // pow()
    // sqrt()
    int a = 3;
    int b = 2;

    printf("%d elevado a %d e %d", a, b, pow(a, b));
    printf(" a raiz quadrada de %d e %d", a, sqrt(a));

    return 0;
}