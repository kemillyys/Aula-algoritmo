#include <stdio.h>

int main()
{
    int cont = 2, num, maior, menor;

    printf("Informe o 1� n�mero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    while(cont <= 10){
        printf("Informe o %d� numero", cont);
        scanf("%d", num);

        if(num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
        cont++;
    }

    printf("Maior n�mero: %d \nMenor n�mero: %d", maior, menor);

    return 0;
}
