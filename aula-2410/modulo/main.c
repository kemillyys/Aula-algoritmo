#include <stdio.h>
//ex com modularizacao
//prototipos das funcoes

float calcula_frete(float peso_kg, float distancia_km, float tarifa_base);
void exibe_resultado(int numero_pedido, float peso, float frete);

int main()
{
    float peso_1 = 5.0, distancia_1 = 100.0;
    float peso_2 = 10.5, distancia_2 = 350.0;
    float peso_3 = 2.0, distancia_3 = 50.0;
    float tarifa = 0.50;
    float frete_calculado;
    //pedido1

    frete_calculado = calcula_frete (peso_1, distancia_1, tarifa);
    exibe_resultado(1, peso_1, frete_calculado);

    //pedido2

    frete_calculado = calcula_frete (peso_2, distancia_2, tarifa);
    exibe_resultado(2, peso_2, frete_calculado);

    //pedido3

    frete_calculado = calcula_frete (peso_3, distancia_3, tarifa);
    exibe_resultado(3, peso_3, frete_calculado);

    return 0;
}


//funcao: deve retornar um float (o valor do frete)

float calcula_frete(float peso_kg, float distancia_km, float tarifa_base){
    //equacao: (peso * 2.00) + (distancia * tarifa_base)

    float valor_frete = (peso_kg * 2.00) + (distancia_km * tarifa_base);

    return valor_frete;
}

//procedimento: nao retorna nada, ele é vazio (void), apenas executa

void exibe_resultado(int numero_pedido, float peso, float frete){
    printf("\n---Pedido %d---\n", numero_pedido);
    printf("Peso: %.2fkg\n", peso);
    printf("Frete calculado: R$%.2f\n", frete);
}
