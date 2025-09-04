#include <stdio.h>

int main()
{
    int n, cont = 1, med, soma = 0;

    while(cont <= 10){
        printf("Informe o %d° numero: ", cont);
        scanf("%d", &n);
        cont++;
        soma += n;
    }

    med = soma / 10;

    printf("A média: %d", med);

    return 0;
}
