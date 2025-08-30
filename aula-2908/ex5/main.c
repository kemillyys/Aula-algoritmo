#include <stdio.h>

int main()
{
    int cont = 1, num, somaP = 0, neg = 0;

    while(cont <= 15){

        printf("Informe o %d° numero:", cont);
        scanf("%d", &num);

            if(num >= 0){
                somaP += num; //somaP = somaP + num;
            }

            else if(num < 0){
                neg++;
            }

            cont++;
    }

    printf("A soma dos números é: %d\n", somaP);

    printf("Números negativos: %d", neg);

    return 0;
}
