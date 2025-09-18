/*
    Escreva um algoritmo que recebe como entrada o RA de um aluno, as 3 notas obtidas durante o semestre e a nota dos exercícios e
calcula a média de aproveitamento, usando a fórmula: Média = (nota 1 + nota 2 * 2 + nota 3 * 3 + ME)/7
A atribuição dos conceitos obedece à regra abaixo. Por fim, o seu algoritmo deve escrever o RA do aluno, suas notas, a média dos
exercícios, a média final, o conceito correspondente e a mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito
for D ou E.
• Média de aproveitamento Conceito
• >= 90 A
• >= 75 e < 90 B
• >= 60 e < 75 C
• >= 40 e < 60 D
• < 40 E

*/

#include <stdio.h>

int main()
{
    int ra, ap;
    double n1, n2, n3, me, media;

    printf("Informe o RA do aluno: \n");
    scanf("%d", &ra);

    printf("Informe a primeira nota 0-10: \n");
    scanf("%lf", &n1);

    printf("Informe a segunda nota 0-10: \n");
    scanf("%lf", &n2);

    printf("Informe a terceira nota 0-10: \n");
    scanf("%lf", &n3);

    me = n1 + n2 + n3 / 3;
    media = (n1 + n2 * 2 + n3 * 3 + me);

    printf("RA: %d\n", ra);

    printf("Média: %.2lf\n", media);

    if(media >= 90.0){
        ap == 'A';
        printf("Conceito A\n");
    }
    else if(media >= 75.0 && media < 90.0){
        ap == 'B';
        printf("Conceito B\n");
    }
    else if(media >= 60.0 && media < 75.0){
        ap == 'C';
        printf("Conceito C\n");
    }
    else if(media >= 40.0 && media < 60.0){
        ap == 'D';
        printf("Conceito D\n");
    }
    else if(media < 40.0){
        ap == 'E';
        printf("Conceito E\n");
    }

    if(ap == 'D' && ap == 'E'){
        printf("Aluno reprovado!\n");
    }
    else{
        printf("Aluno aprovado!\n");
    }

    return 0;
}
