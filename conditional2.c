#include <stdio.h>

int main()
{
    int dia;
    printf("Digite um valor entre 1 e 7 para saber o dia da semana: ");
    scanf("%d", &dia);
    switch (dia)
    {
        case 1:
            printf("O dia da semana eh domingo!");
            break;
        case 2:
            printf("O dia da semana eh segunda-feira!");
            break;
        case 3:
            printf("O dia da semana eh terça-feira!");
            break;
        case 4:
            printf("O dia da semana eh quarta-feira!");
            break;
        case 5:
            printf("O dia da semana eh quinta-feira!");
            break;
        case 6:
            printf("O dia da semana eh sexta-feira!");
            break;  
        case 7:
            printf("O dia da semana eh sabado!");
            break;
    
        default:
            printf("Digite um valor entre 1 e 7!!!");
            break;
    }

    return 0;
    
}

/*
Digite um valor entre 1 e 7 para saber o dia da semana: 7
O dia da semana eh sabado!
*/