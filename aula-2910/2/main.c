#include <stdio.h>
#include <string.h> // para podermos usar string
// c�digo monilitico, sem prototipo, sem fun�oes de apoio (void ou com retorno).

int main() {

  // Vari�veis do Funcion�rio 1

  char nome_1[50] = "Maria Oliveira"; // essa valida�ao nao aparece a mais adequada

  float salario_base_1 = 5000.00;

  float total_descontos_1 = 1200.00;

  float meses_trabalhados_1 = 8.5;


  float salario_liquido_1;

  float dias_ferias_1;


  printf("Iniciando processamento do holerite (Vers�o Monol�tica)...\n");



  // ==========================================================

  // IN�CIO DO PROCESSAMENTO DO FUNCION�RIO 1

  // ==========================================================



  // 1. L�gica de Valida��o (Desafio Extra) - L�gica de neg�cio aqui

  if (strlen(nome_1) > 3) {



    // 2. L�gica de C�LCULO DE SAL�RIO L�QUIDO - L�gica de neg�cio aqui

    salario_liquido_1 = salario_base_1 - total_descontos_1;

    if (salario_liquido_1 < 0) {

      salario_liquido_1 = 0.0;

    }



    // 3. L�gica de C�LCULO DE F�RIAS - L�gica de neg�cio aqui

    if (meses_trabalhados_1 < 12.0) {

      dias_ferias_1 = (meses_trabalhados_1 / 12.0) * 30.0;

    } else {

      dias_ferias_1 = 30.0;

    }



    // 4. L�gica de EXIBI��O (Holerite) - L�gica de I/O aqui

    printf("\n========================================");

    printf("\n| HOLERITE - %s", nome_1);

    printf("\n========================================");

    printf("\n| Sal�rio Bruto: R$ %19.2f |", salario_base_1);

    printf("\n| Sal�rio L�quido: R$ %17.2f |", salario_liquido_1);

    printf("\n| F�rias Acumuladas: %15.1f dias |", dias_ferias_1);

    printf("\n========================================\n");



  } else {

    printf("ERRO: Nome do funcion�rio 1 � inv�lido.\n");

  }



  // ==========================================================

  // IN�CIO DO PROCESSAMENTO DO FUNCION�RIO 2

  // ==========================================================



  // Vari�veis do Funcion�rio 2 (repitido

  char nome_2[50] = "Jo�o G."; //furou a veri

  float salario_base_2 = 3000.00;

  float total_descontos_2 = 500.00;

  float meses_trabalhados_2 = 14.0;



  float salario_liquido_2;

  float dias_ferias_2;



  // 1. L�gica de Valida��o - L�gica de neg�cio

  if (strlen(nome_2) > 3) {



    // 2. L�gica de C�LCULO DE SAL�RIO L�QUIDO - L�gica de neg�cio

    salario_liquido_2 = salario_base_2 - total_descontos_2;

    if (salario_liquido_2 < 0) {

      salario_liquido_2 = 0.0;

    }



    // 3. L�gica de C�LCULO DE F�RIAS - L�gica de neg�cio

    if (meses_trabalhados_2 < 12.0) {

      dias_ferias_2 = (meses_trabalhados_2 / 12.0) * 30.0;

    } else {

      dias_ferias_2 = 30.0;

    }



    // 4. L�gica de EXIBI��O (Holerite) - L�gica de I/O

    printf("\n========================================");

    printf("\n| HOLERITE - %s", nome_2);

    printf("\n========================================");

    printf("\n| Sal�rio Bruto: R$ %19.2f |", salario_base_2);

    printf("\n| Sal�rio L�quido: R$ %17.2f |", salario_liquido_2);

    printf("\n| F�rias Acumuladas: %15.1f dias |", dias_ferias_2);

    printf("\n========================================\n");



  } else {

    printf("ERRO: Nome do funcion�rio 2 � inv�lido.\n"); // Exibir� esta mensagem

  }



  return 0;

}
