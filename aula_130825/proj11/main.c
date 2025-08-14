#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, primeiro, razao, a;

    printf("Informe o valor do primeiro termo: ");
    scanf("%lf", &primeiro);

    printf("Informe o valor da razão: ");
    scanf("%lf", &razao);

    printf("Informe o número de ordem: ");
    scanf("%lf", &n);

    a = primeiro + (n - 1) * razao;

    printf("Resultado: %lf", a);
    return 0;
}
