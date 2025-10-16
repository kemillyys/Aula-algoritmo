#include <stdio.h>
//#define qtdAluno 6 (para definir a variavel e a quantidade dela de forma mais fácil)(dentro do int teria que declarar do msm jeito)

int main()
{
    double media = 0.0, soma = 0.0;
    int qtdAlunos;

    printf("Informe a quantidade de alunos da turma:\n");
    scanf("%d", &qtdAlunos);

    double notas[qtdAlunos];

    for(int i = 0; i < qtdAlunos; i++){
        do{
            printf("Informe a nota do aluno %d:\n", i + 1);
            scanf("%lf", &notas[i]);

            if(notas[i] < 0 || notas[i] > 10){
                printf("Digite uma nota válida, entre 0 e 10!\n");
            }
        }while(notas[i] < 0 || notas[i] > 10);

        soma += notas[i];
    }

    media = soma / qtdAlunos;

    printf("Soma das notas: %.2lf\n", soma);
    printf("Média das notas dos alunos: %.2lf\n", media);

    return 0;
}
