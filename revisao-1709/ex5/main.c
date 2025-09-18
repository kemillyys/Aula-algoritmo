/*

    As Ilhas Weblands formam um reino independente nos mares do Pacífico. Como é um reino recente, a sociedade é
    muito influenciada pela informática. A moeda oficial é o Bit; existem notas de B$ 50,00, B$10,00, B$5,00 e B$1,00.
    Você foi contratado(a) para ajudar na programação dos caixas automáticos de um grande banco das Ilhas Weblands.
    Tarefa: Os caixas eletrônicos das Ilhas Weblands operam com todos os tipos de notas disponíveis, mantendo um
    estoque de cédulas para cada valor ( B$ 50,00, B$10,00, B$5,00 e B$1,00). Os clientes do banco utilizam os caixas
    eletrônicos para efetuar retiradas de um certo número inteiro de Bits. Sua tarefa é escrever um programa que, dado
    o valor de Bits desejado pelo cliente, determine o número de cada uma das notas necessário para totalizar esse
    valor, de modo a minimizar a quantidade de cédulas entregues. Por exemplo, se o cliente deseja retirar B$ 50,00,
    basta entregar uma única nota de cinquenta Bits. Se o cliente deseja retirar B$72,00, é necessário entregar uma nota
    de B$50,00, duas de B$10,00 e duas de B$1,00.
    O seu programa deve funcionar uma quantidade indeterminada de vezes, até q o valor zero (condição de para do
    programa) seja informado.

*/

#include <stdio.h>

int main()
{
    int c1 = 0.0, c2 = 0.0, c3 = 0.0, c4 = 0.0, valorCliente;

    do{
        printf("Informe o valor desejado: (digite 0 para sair)\n");
        scanf("%d", &valorCliente);

        c1 = valorCliente / 50;
        valorCliente %= 50;

        c2 = valorCliente / 10;
        valorCliente %= 10;

        c3 = valorCliente / 5;
        valorCliente %= 5;

        c4 = valorCliente;

        printf("Notas de 50: %d\n", c1);
        printf("Notas de 10: %d\n", c2);
        printf("Notas de 5: %d\n", c3);
        printf("Notas de 1: %d\n", c4);

    }while(valorCliente != 0);

    return 0;
}
