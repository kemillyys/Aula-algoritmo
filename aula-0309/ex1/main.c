#include <stdio.h>

int main()
{
    int n;

    printf("Informe um número inteiro: ");
    scanf("%d", &n);

    if(n > 0){
        while(n >= 1){
            printf("%d\n", n);
            n--;
        }
    }
    else{
        printf("Numero negativo!");
    }

    return 0;
}
