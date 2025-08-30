#include <stdio.h>

int main()
{
    int cont = 1, num, soma = 0;

    while(cont <= 5){
        printf("Informe o %d° numero:", cont);
        scanf("%d", &num);
        soma += num;
        cont++;
    }
    printf("A soma dos números é: %d.", soma);
    return 0;
}
