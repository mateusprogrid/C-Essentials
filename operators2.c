#include <stdio.h>

int main()
{
    float num1 = 10;
    float num2 = 3;
    float resultado;

    resultado = num1 / num2;

    printf("O valor do resultado eh: %f", resultado);

    return 0;

}

/*
O valor do resultado eh: 3.333333
CUIDADO!!
Com pegadinhas. as duas variáveis devem 
ser do tipo float, para gerar 3.333333
*/