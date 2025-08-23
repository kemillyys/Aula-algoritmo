#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("%d, %d", num1, num2);
    }
    else{
        printf("%d, %d", num2, num1);
    }
}
