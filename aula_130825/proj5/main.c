#include <stdio.h>
#include <math.h>

int main()
{
    double num, raiz;
    printf("Informe um  n�mero: ");
    scanf("%lf", &num);

    raiz = sqrt(num);

    printf("A raiz do n�mero �: %.2lf", raiz);
    return 0;
}
