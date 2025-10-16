#include <stdio.h>

int main()
{
    char nome[15]="Algoritmo C";

    printf("Nome como na string: %s\n", nome);

    printf("Nome Charactere por Charactere:\n");

    for(int i = 0; nome[i] != '\0'; i++){
        printf("Charactere na posição[%d]: %c\n", i, nome[i]);
    }

    return 0;
}
