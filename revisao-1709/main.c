#include <stdio.h>

int main()
{
    int n;

    printf("Informe o c�digo do produto (1 a 4): \n");
    scanf("%d", &n);

    if(n >= 1 && n <= 4){
        switch(n){
            case 1:{
                printf("Alimento n�o-perec�vel\n");
                break;
            }
            case 2:{
                printf("Alimento perec�vel\n");
                break;
            }
            case 3:{
                printf("Vestu�rio\n");
                break;
            }
            case 4:{
                printf("Limpeza\n");
                break;
            }
        }
    }
    else{
        printf("C�digo inv�lido!\n");
    }

    return(0);

}
