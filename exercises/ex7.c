/*
7. Contar números pares
Leia um N (inteiro >= 1). Conte quantos números pares existem no 
intervalo de 1 a N (inclusive) e mostre o total. Usar o operador de módulo %.
*/
#include <stdio.h>

int main()
{
    int numero, total_pares = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero < 1)
    {
        printf("O numero deve ser maior ou igual a 1!!!");
    }
    else
    {
        for (int i = 1; i <= numero; i++)
        {
            if (i % 2 == 0)
            {
                total_pares++;
            }
            
        }

        printf("Existem %d numeros pares entre 1 e %d.\n", total_pares, numero);
        
    }
    
    return 0;
    
}
    