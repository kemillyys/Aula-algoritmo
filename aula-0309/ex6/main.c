#include <stdio.h>

int main()
{
    int n, soma = 0, qtd = 0;

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    while(n != 0){
        soma += n;
        qtd++;
        printf("Informe um n�mero: ");
        scanf("%d", &n);
    }
    printf("M�dia: %d", (soma/qtd));

    return 0;
}
