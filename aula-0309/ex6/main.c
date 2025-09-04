#include <stdio.h>

int main()
{
    int n, soma = 0, qtd = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    while(n != 0){
        soma += n;
        qtd++;
        printf("Informe um número: ");
        scanf("%d", &n);
    }
    printf("Média: %d", (soma/qtd));

    return 0;
}
