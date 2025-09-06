#include <stdio.h>

int main()
{
    int soma;

    for(int i = 100; i <= 200; i++){
        if(i % 7 == 0){
            printf("%d\n", i);
            soma += i;
        }
    }
    printf("Soma dos multiplos: %d", soma);

    return 0;
}
