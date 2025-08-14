#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fabrica, dist, impost, custo;

    printf("Informe o custo da fábrica: ");
    scanf("%lf", &fabrica);

    dist = fabrica * 0.28;
    impost = fabrica * 0.45;
    custo = fabrica + dist + impost;

    printf("O custo total é: %.2lf", custo);

    return 0;
}
