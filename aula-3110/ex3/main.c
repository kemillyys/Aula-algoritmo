#include <stdio.h>

int main() {
int A[2][3] = {
{1, 2, 3},
{4, 5, 6}
};

int B[3][2];

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        B[j][i] = A[i][j];
    }
}

printf("Matriz A (2x3):\n");

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}

printf("\nMatriz B (transposta de A) (3x2):\n");

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", B[i][j]);
    }
    printf("\n");
}

return 0;
}