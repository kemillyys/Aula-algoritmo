#include <stdio.h>

int main()
{
    int n, cont = 1, num, somaPares = 0, somaImpares = 0, quantImpares = 0;

    printf("Informe a quantidade de n�meros: ");
    scanf("%d", &n);

    while(cont <= n){

        printf("Informe o %d� n�mero: ", cont);
        scanf("%d", &num);

            if(num % 2 == 0){
                somaPares += num;
            }
            else{
                somaImpares += num;
                quantImpares++;
            }
        cont++;
    }

    printf("Soma dos pares: %d\n", somaPares);
    printf("Soma dos �mpares: %d\n", somaImpares);
    printf("Quantidade de �mpares: %d\n", quantImpares);

    return 0;
}
