#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    printf("Informe um número negativo: ");
    scanf("%lf", &num);

    printf("O resultado é: %.2lf", fabs(num));
    return 0;
}
