#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Informe um n�mero inteiro: ");
    scanf("%d", &n1);

    printf("Informe outro n�mero inteiro: ");
    scanf("%d", &n2);

    /* (essa forma tb da certo)
    if(n1 % 2 == 0 && n2 % 2 == 0){
        printf("Os n�meros s�o pares");
    }
    else if(n1 % 2 == 0 || n2 % 2 == 0){
        printf("Um dos dois n�meros � par!");
    }

    else{
        printf("Is dois n�meros s�o �mpares!");
    }
    */

    if(n1 % 2 == 0 && n2 % 2 == 0){
        printf("Os n�meros s�o pares");
    }
    else if(n1 % 2 == 0){
        printf("O primeiro numero � par!");
    }

    else if(n2 % 2 == 0){
        printf("O primeiro numero � par!");
    }

    else{
        printf("Is dois n�meros s�o �mpares!");
    }

    return 0;
}
