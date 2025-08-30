#include <stdio.h>

int main()
{
    double n1, n2;
    char operacao;

    printf("Informe dois números reais: ");
    scanf("%lf %lf", &n1, &n2);

    printf("Informe a operação: +, -, * ou /\n");
    scanf(" %c", &operacao);

    switch(operacao){
        case '+':{
            printf("Soma: %.2lf\n", n1 + n2);
            break;
        }

        case '-':{
            printf("Subtração: %.2lf\n", n1 - n2);
            break;
        }

        case '*':{
            printf("Multiplicação: %.2lf\n", n1 * n2);
            break;
        }

        case '/':{
            if(n2 == 0){
                printf("Divisão por zero!");
            }
            else{
                printf("Divisão: %.2lf\n", n1 / n2);
            }
            break;
        }

        default:{
            printf("Operação inválida!");
        }
    }
    return 0;
}
