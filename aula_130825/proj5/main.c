#include <stdio.h>
#include <math.h>

int main()
{
    double num, raiz;
    printf("Informe um  número: ");
    scanf("%lf", &num);

    raiz = sqrt(num);

    printf("A raiz do número é: %.2lf", raiz);
    return 0;
}
