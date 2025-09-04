#include <stdio.h>

int main()
{
    int n, soma = 0, cont = 1;

    while(cont <= 5){
        printf("Informe o %d° numero: ", cont);
        scanf("%d", &n);
        soma += n;
        cont++;
    }

    printf("Soma dos número: %d", soma);

    return 0;
}
