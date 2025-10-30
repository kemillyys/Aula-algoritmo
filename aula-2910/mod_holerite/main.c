#include <stdio.h>
#include <string.h>

    //prototipos fun�oes
  float calcula_salario_liquido(float bruto, float desconto);
  float calcula_ferias(float meses_trabalhados);
  void emitir_holerite(char nome[], float bruto, float liquido, float dias_ferias); //procedimento(void)
  int validar_nome(char nome[]);

int main() {
  //Vari�veis do Funcion�rio 1
  char nome[50] = "Maria Oliveira"; // essa valida�ao nao aparece a mais adequada
  float salario_base = 5000.00;
  float total_descontos = 1200.00;
  float meses_trabalhados = 8.5;
  float salario_liquido;
  float dias_ferias;

  printf("Iniciando processamento do holerite (Vers�o Monol�tica)...\n");

  printf("Iniciando processo do Holerite");
  if(validar_nome(nome)){ //#1
    salario_liquido = calcula_salario_liquido(); //#2
    dias_ferias = calcula_ferias(); //#3
    emitir_holerite();
  } else {
    printf("ERRO");
  }

  return 0;
}

//IMPLEMENTA�AO DOS M�DULOS DE FUN��ES
//====================================
//1. Fun��o: retorna float
float calcula_salario_liquido(float bruto, float descontos){
    float liquido = bruto - descontos;
    //garantir que o liquido nao seja negativo
    return(liquido > 0)? liquido:0.0;
}

//2 Fun��o: retorna float
float calcula_ferias(float meses_trabalhados){
    if(meses_trabalhados < 12){//propor��o meses / 12 * 30 dias
        return(meses_trabalhados/12.0) * 30.0;
    } else {
        //acima de 12 meses, ou 30 dias integrais (simplificar)
        return 30.0;
    }
}

//2 procedimento retorno void (apenas uma exibi��o)
void emitir_holerite(char nome[], float bruto, float liquido, float dias_ferias){
    printf("\n========================================");
    printf("\n| HOLERITE - %s", nome);
    printf("\n========================================");
    printf("\n| Sal�rio Bruto: R$ %19.2f |", bruto);
    printf("\n| Sal�rio L�quido: R$ %10.2f |", liquido);
    printf("\n| F�rias Acumuladas: %10.1f dias |", dias_ferias);
    printf("\n========================================\n");
}

// desafio extra (4) Fun��o: que retorna int (simulado booleano)
//int validar_nome(char nome[]){
    //usamos strlen para conter o comprimento da string em C
    //queremos um if para o strlen > que uma quantidade rasu�vel
    //retorna 1 se verdadeiro e 0 caso falso;
    //entrega junto com a lista
//}
