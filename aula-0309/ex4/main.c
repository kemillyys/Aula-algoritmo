#include <stdio.h>

int main()
{
    int n, soma = 0, cont = 0;

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    while(cont <= n){
        soma += cont;
        cont++;
    }

    printf("Soma: %d", soma);

    return 0;
}
