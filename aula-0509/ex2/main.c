#include <stdio.h>

int main()
{
    int num, maior, menor, cont = 1;

    do{
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(cont == 1){
            maior == num;
            menor == num;
            cont++;
        }
        else if(num != 0){
            if(num > maior){
                maior = num;
            }
            else if(num < menor){
                menor = num;
            }
        }

    }
    while(num != 0);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
