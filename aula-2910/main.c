#include <stdio.h>

int somar_elementos(int *vetor, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }

    return soma;
}

int main() {
    int numeros[] = {2, 4, 6, 8, 10};
    int tamanho = 5;

    int resultado = somar_elementos(numeros, tamanho);

    printf("A soma dos elementos é: %d\n", resultado);

    return 0;
}
