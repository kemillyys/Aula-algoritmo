#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, resultado;

    printf("Informe um n�mero: ");
    scanf("%lf", &x);

    printf("Informe outro n�mero: ");
    scanf("%lf", &y);

    resultado = pow(x, y);

    printf("O resultado �: %.2lf\n", resultado);
    return 0;
}
