#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Informe o segundo n�mero: ");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("%d, %d", num1, num2);
    }
    else{
        printf("%d, %d", num2, num1);
    }
}
