#include <stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia, mes e ano desejado: ");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
    printf("A data digitada foi: %d - %d - %d", dia, mes, ano);

    return 0;

}
/*
Digite o dia, mes e ano desejado: 01 10 2025
A data digitada foi: 1 - 10 - 2025
*/