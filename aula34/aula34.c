#include <stdio.h>

int main()
{

    /*  0   1   2   3   4
     *---------------------
     *|   |   |   |   |   |
     *---------------------
     */
    int valores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("informe o %d/5 valor: ", (i + 1));
        scanf("%d", &valores[i]);
    }

    printf("os valores informados foram: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("o valor da %d posicao e: %d\n", (i + 1), valores[i]);
    }

    printf("%p %d\n", &valores[0], valores[0]);
    printf("%p %d\n", valores, valores[0]);

    // -------------------------------------------------------------------------

    /*
    int = 4 bytes
    bit 0 / 1
    byte 0000 0001
    0000 0000 0000 0000 0000 0000 0000 0001
    0000 0000 0000 0000 0000 0000 0000 0010
    */
    int vals[5] = {10, 20, 30, 40, 50};

    // sizeof diz a quantidade de bytes que existe em um valor
    for (int i = 0; i < 5; i++)
    {
        printf("o valor %d tem %ld bytes\n", vals[i], sizeof(vals[i]));
    }

    printf("o array vals possui %ld bytes\n", sizeof(vals));

    printf("vals[0] vale %d e endereco de memoria e %p\n", vals[0], vals[0]);
    printf("*(vals) vale %d e endereco de memoria e %p\n", *(vals), *(vals));

    printf("*(vals + 1) vale %d e endereco de memoria e %p\n", *(vals + 1), *(vals + 1));
    printf("*(vals + 2) vale %d e endereco de memoria e %p\n", *(vals + 2), *(vals + 2));
    printf("*(vals + 3) vale %d e endereco de memoria e %p\n", *(vals + 3), *(vals + 3));
    printf("*(vals + 4) vale %d e endereco de memoria e %p\n", *(vals + 4), *(vals + 4));

    return 0;
}