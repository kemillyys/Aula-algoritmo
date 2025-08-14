#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dezena, aux;
    printf("Informe um número de 3 dígitos: ");
    scanf("%d", &num);

    aux = num / 10;
    dezena = aux % 10;

    printf("Dezena: %d\n", dezena);

    return 0;
}
