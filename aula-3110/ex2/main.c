#include <stdio.h>

int main()
{
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int soma = 0;

    for(int i = 0; i < 4; i++){
        soma += matriz[i][i];
    }

    printf("Soma da diagonal principal: %d", soma);

    return 0;
}