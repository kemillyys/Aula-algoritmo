#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Informe um número inteiro: ");
    scanf("%d", &n);

    if(n > 0){
            while(i <= n){
                printf("%d\n", i);
                i++;
            }
    }
    else{
        printf("O número deve ser positivo!");
    }

    return 0;
}
