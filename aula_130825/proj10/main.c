#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, resultado, raiz;

    printf("Informe um n�mero: ");
    scanf("%lf", &num1);

    printf("Informe outro n�mero; ");
    scanf("%lf", &num2);

    resultado = num1 * num2;

    raiz = sqrt(resultado);

    printf("A raiz quadrada �: %.2lf", raiz);
    return 0;
}
