#include <stdio.h>

int main()
{
    int n;

    printf("Informe o código do produto (1 a 4): \n");
    scanf("%d", &n);

    if(n >= 1 && n <= 4){
        switch(n){
            case 1:{
                printf("Alimento não-perecível\n");
                break;
            }
            case 2:{
                printf("Alimento perecível\n");
                break;
            }
            case 3:{
                printf("Vestuário\n");
                break;
            }
            case 4:{
                printf("Limpeza\n");
                break;
            }
        }
    }
    else{
        printf("Código inválido!\n");
    }

    return(0);

}
