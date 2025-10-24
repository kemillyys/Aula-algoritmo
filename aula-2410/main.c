#include <stdio.h>

int main()
{
    //Exemplo monolítico
    //Calculo padido 1
    float peso_1 = 1.5;
    float distancia_1 = 100.0;
    float tarifa_base = 0.50;
    float frete_1;

    printf("Pedido 1\n");
    printf("Peso: %.2f\nkg", peso_1);
    printf("Frete calculado: R$ %.2f\n", frete_1);

    frete_1 = (peso_1 * 2.00)+ (distancia_1 * tarifa_base);

    //calculo padido 2
    float peso_2 = 12.5;
    float distancia_2 = 350.0;
    float tarifa_base = 0.50;
    float frete_2;

    printf("Pedido 2\n");
    printf("Peso: %.2f\nkg", peso_2);
    printf("Frete calculado: R$ %.2f\n", frete_2);

    frete_2 = (peso_2 * 2.00)+ (distancia_2 * tarifa_base);

    //calculo padido 3
    float peso_3 = 2.0;
    float distancia_3 = 50.0;
    float tarifa_base = 0.50;
    float frete_3;

    printf("Pedido 3\n");
    printf("Peso: %.2f\nkg", peso_3);
    printf("Frete calculado: R$ %.2f\n", frete_3);

    frete_3 = (peso_3 * 2.00)+ (distancia_3 * tarifa_base);

    return 0;
}
