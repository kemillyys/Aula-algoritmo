#include <stdio.h>

int main()
{
    int n, fat = 1;
    printf("Informe um n�mero: ");
    scanf("%d", &n);

    while(n >= 1){
        fat *= n;
        n--;
    }

    printf("Fatorial: %d", fat);

    return 0;
}
