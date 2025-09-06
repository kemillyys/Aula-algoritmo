#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i = i + 3){
        printf("%d\t", i);
    }
    return 0;
}

