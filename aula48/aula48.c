#include <stdio.h>
#include <time.h>

// funções de data e hora

// clock() = retorna o numero de pulso de clock
// time() = tempo atual do calendário
// localtime() = converte valor time para hora local

int main()
{

    // clock()
    long int inicio_t, fim_t, total_t;

    inicio_t = clock();
    printf("inicio do programa: %ld\n", inicio_t);

    for (int i = 0; i < 100000000; i++)
    {
    }

    fim_t = clock();
    printf("fim do loop do programa: %ld\n", fim_t);

    total_t = (double)((double)fim_t - (double)inicio_t) / (double)CLOCKS_PER_SEC;

    printf("clocks por segundo: %ld\n", CLOCKS_PER_SEC);

    printf("tempo total de CPU: %ld\n", total_t);
    printf("fim");

    // time()
    time_t segundos;

    segundos = time(NULL);
    printf("horas desde 1 de janeiro de 1970 = %ld", segundos / 3600);

    // localtime()
    time_t tempobruto;
    struct tm *info;

    time(&tempobruto);
    info = localtime(&tempobruto);
    printf("data e hora local %s", asctime(info));

    return 0;
}