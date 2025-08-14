#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("Informe um número: ");
    scanf("%lf", &x);

    printf("Quadrado: %.2lf\n", pow(x, 2));
    printf("Cubo: %.2lf", pow(x, 3));
    return 0;
}
