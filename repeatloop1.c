#include <stdio.h>

int main()
{
    float numero, acumuladora = 0;
    int contador = 0;
    printf("Digite valores para calcular a media: \n");
    printf("Valor negativo indica saida do loop\n");
    scanf("%f", &numero);
    while (numero > 0)
    {
        acumuladora += numero;
        contador++;
        printf("Digite um numero para calcular a media: \n");
        scanf("%f", &numero);
    }
    if (contador)
    {
        printf("Media eh igual a: %.2f", acumuladora/contador);
    }
    else
    {
        printf("Nao foram informados valores!");
    }

    return 0;
    
}

/*
Digite valores para calcular a media: 
Valor negativo indica saida do loop
10
Digite um numero para calcular a media: 
10
Digite um numero para calcular a media: 
10
Digite um numero para calcular a media: 
-5
Media eh igual a: 10.00

É um loop que só irá para quando afetar a 
condição numero > 0 (ou seja, quando o usuário
digitar um valor negativo Ex.: -5).
Usuário digitou 10... 10 é maior que 0? Sim
acumuladora = 10
contador = 0 + 1 = 1
Usuário digitou 10... 10 é maior que 0? Sim
acumuladora = 10 + 10 = 20
contador 1 + 1 = 2
Usuario digitou -5... -5 é maior que 0? Não
Parou o loop!!
media é igual a 20/2 = 10.00 (.00 porque coloquei
%.2f flutuador com duas casas decimais).
Porém, se no início:
Usuário digitou -5... -5 é maior do que 0? Não
O loop nem inicia, consequentemente, não tenho 
acumuladora, e não posso calcular a media.
Então: "Não foram informados valores!"
*/
// ---------------------------------------------------------------------
/*
Se eu utilizar do while
#include <stdio.h>

int main()
{
    float numero, acumuladora = 0;
    int contador = 0;
    printf("Digite valores para calcular a media: \n");
    printf("Valor negativo indica saida do loop\n");
    scanf("%f", &numero);
    do
    {
        acumuladora += numero;
        contador++;
        printf("Digite um numero para calcular a media: \n");
        scanf("%f", &numero);
    }while (numero > 0);
    if (contador)
    {
        printf("Media eh igual a: %.2f", acumuladora/contador);
    }
    else
    {
        printf("Nao foram informados valores!");
    }

    return 0;
    
}

O do força a entrada inicial da variável
e só começa a testar os valores pela condição
depois da inicial
Agora, se no início:
Usuário digitou -5... OK!
Acumuladora = -5
Usuário digitou 15... 15 é maior do que 0? Sim
Acumuladora = -5 + 15 = 10
Usuário digitou -5... -5 é maior do que 0? Não
Parou o loop
Parou o loop!!
media é igual a 10/2 = 5.00 (.00 porque coloquei
%.2f flutuador com duas casas decimais).
*/