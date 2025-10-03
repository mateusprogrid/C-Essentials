#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 3;
    int resultado;

    resultado = num1 % num2;

    printf("O valor do resultado eh: %d", resultado);

    return 0;

}

/*
% ---> sempre vai precisar de variáveis do tipo 
inteiro(int), float vai dar erro!
O valor do resultado eh: 1
Porém, se:
float resultado e %f
O valor do resultado eh: 1.000000
Porém, se:
-resultado
O valor do resultado eh: -1
Porém, se:
++resultado
O valor do resultado eh: 2
Porém, se:
--resultado
O valor do resultado eh: 0
*/