#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dia, mes, ano, aux;

    printf("Informe a data: ");
    scanf("%d", &num);

    dia = num / 10000;
    aux = num % 10000;
    mes = aux / 100;
    ano = aux % 100;

    printf("Dia: %d Mês: %d Ano: %d", dia, mes, ano);

    return 0;
}
