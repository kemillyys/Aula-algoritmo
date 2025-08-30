#include <stdio.h>

int main()
{
    double n1, n2;
    char operacao;

    printf("Informe dois n�meros reais: ");
    scanf("%lf %lf", &n1, &n2);

    printf("Informe a opera��o: +, -, * ou /\n");
    scanf(" %c", &operacao);

    switch(operacao){
        case '+':{
            printf("Soma: %.2lf\n", n1 + n2);
            break;
        }

        case '-':{
            printf("Subtra��o: %.2lf\n", n1 - n2);
            break;
        }

        case '*':{
            printf("Multiplica��o: %.2lf\n", n1 * n2);
            break;
        }

        case '/':{
            if(n2 == 0){
                printf("Divis�o por zero!");
            }
            else{
                printf("Divis�o: %.2lf\n", n1 / n2);
            }
            break;
        }

        default:{
            printf("Opera��o inv�lida!");
        }
    }
    return 0;
}
