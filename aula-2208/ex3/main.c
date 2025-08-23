#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Informe um número inteiro: ");
    scanf("%d", &n1);

    printf("Informe outro número inteiro: ");
    scanf("%d", &n2);

    /* (essa forma tb da certo)
    if(n1 % 2 == 0 && n2 % 2 == 0){
        printf("Os números são pares");
    }
    else if(n1 % 2 == 0 || n2 % 2 == 0){
        printf("Um dos dois números é par!");
    }

    else{
        printf("Is dois números são ímpares!");
    }
    */

    if(n1 % 2 == 0 && n2 % 2 == 0){
        printf("Os números são pares");
    }
    else if(n1 % 2 == 0){
        printf("O primeiro numero é par!");
    }

    else if(n2 % 2 == 0){
        printf("O primeiro numero é par!");
    }

    else{
        printf("Is dois números são ímpares!");
    }

    return 0;
}
