#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    printf("Informe um n�mero negativo: ");
    scanf("%lf", &num);

    printf("O resultado �: %.2lf", fabs(num));
    return 0;
}
