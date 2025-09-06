#include <stdio.h>

int main()
{
    int num, cont = 1;

    printf("Informe um número: ");
    scanf("%d", &num);

    do{
        printf("%d x %d = %d\n", num, cont, (num * cont));
        cont++;
    }
    while(cont <= 10);

    return 0;
}
