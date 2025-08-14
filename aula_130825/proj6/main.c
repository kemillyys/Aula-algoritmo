#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, resultado;

    printf("Informe um número: ");
    scanf("%lf", &x);

    printf("Informe outro número: ");
    scanf("%lf", &y);

    resultado = pow(x, y);

    printf("O resultado é: %.2lf\n", resultado);
    return 0;
}
