/*
1. Leitura e escrita básica
Leia um inteiro e escreva o seu dobro usando printf.
*/
#include <stdio.h>

int main()
{
    int numero, dobro;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    dobro = 2 * numero;
    printf("Esse eh o dobro: %d\n", dobro);

    return 0;
    
}
