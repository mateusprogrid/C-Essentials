#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    int resultado;

    resultado = a + b * c;

    printf("O resultado da expressao eh: %d", resultado);

    return 0;

}

/*
O resultado da expressao eh: 14
Porém, se:
resultado = (a + b) * c;
O resultado da expressao eh: 20
*/