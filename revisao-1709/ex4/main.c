/*

    Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os
dados utilizados para a contagem dos votos obedecem à seguinte codificação:
        • 1,2,3,4 = voto para os respectivos candidatos;
        • 5 = voto nulo;
        • 6 = voto em branco;
        • Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
        • total de votos para cada candidato;
        • total de votos nulos;
        • total de votos em branco;
        • Como finalizador do conjunto de votos, tem-se o valor 0.

*/

#include <stdio.h>

int main()
{
    int op, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0, total;

    do{
        printf("Informe seu voto:\n1- Candidato 1\n2- Candidato 2\n3- Candidato 3\n4- Candidato 4\n5- Nulo\n6- Branco\n0- Sair\n");
        scanf("%d", &op);

        switch(op){
            case 0:{
                printf("Você saiu!\n");
                break;
            }
            case 1:{
                c1++;
                break;
            }
            case 2:{
                c2++;
                break;
            }
            case 3:{
                c3++;
                break;
            }
            case 4:{
                c4++;
                break;
            }
            case 5:{
                nulo++;
                break;
            }
            case 6:{
                branco++;
                break;
            }
            default:{
                printf("Opção Inválida!\n");
            }
        }

        total = c1 + c2 + c3 + c4 + branco + nulo;
    }while(op != 0);

    if(total > 0){
        printf("Canditado 1: %d\n", c1);
        printf("Canditado 2: %d\n", c2);
        printf("Canditado 3: %d\n", c3);
        printf("Canditado 4: %d\n", c4);
        printf("Nulo: %d\n", nulo);
        printf("Branco: %d\n", branco);
    }
    else{
        printf("Não há votos disponíveis!\n");
    }

    return 0;
}
