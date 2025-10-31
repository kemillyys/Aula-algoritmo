#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = i + j;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Valor na segunda linha e terceira coluna: %d\n", matriz[1][2]);
    return 0;
}