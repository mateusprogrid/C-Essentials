/*
6. while — contagem de positivos
Leia inteiros até que seja digitado 0. Ao terminar, mostre 
quantos números positivos foram lidos.
*/
#include <stdio.h>

int main()
{
    int numero, positivos = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    while (numero != 0)
    {
        if (numero > 0)
        {
            positivos++;
        }
        printf("Digite outro numero: ");
        scanf("%d", &numero);
    }

    printf("Total de numeros positivos digitados: %d\n", positivos);

    return 0;
    
}