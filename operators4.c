#include <stdio.h>

int main()
{
    int resultado = 27;

    resultado++;

    printf("O valor do resultado eh: %d", resultado);

    return 0;

}

/*
O valor do resultado eh: 28
Porém, se:
resultado--
O valor do resultado eh: 26
*/