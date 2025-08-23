#include <stdio.h>

int main()
{
    char sexo;
    double altura, peso;

    printf("Informe o sexo: ");
    scanf("%c", &sexo);

    printf("Informe a altura: ");
    scanf("%lf", &altura);

    if(sexo == 'm' || sexo == 'M'){
        peso = (72.7 * altura) - 58;
        printf("O peso ideal eh: %.2lf", peso);
    }

    else if(sexo == 'f' || sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("O peso ideal eh: %.2lf", peso);
    }

    else{
        printf("Opçao invalida!");

    }
    return 0;
}
