#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Informe um n�mero decimal: ");
    scanf("%lf", &num);

    printf("Floor: %lf\n", floor(num));
    printf("Ceil: %lf\n", ceil(num));
    printf("Round: %lf\n", round(num));

    return 0;
}
