#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, resultado, raiz;

    printf("Informe um número: ");
    scanf("%lf", &num1);

    printf("Informe outro número; ");
    scanf("%lf", &num2);

    resultado = num1 * num2;

    raiz = sqrt(resultado);

    printf("A raiz quadrada é: %.2lf", raiz);
    return 0;
}
