/*
    Escreva um algoritmo que permita fazer um levantamento do estoque de
vinhos de uma adega, que tem como dados de entrada os tipos de vinhos,
sendo: “T” para tinto; “B” para branco e “R” para rosê. A quantidade de
garrafas de vinho da adega é desconhecida. Quando a letra “F” (de fim) for
informada, o programa deve parar de receber dados e escrever a quantidade
de cada tipo de vinho e a quantidade total de vinhos na adega.

*/

#include <stdio.h>

int main()
{
    char menu;
    int tinto = 0, branco = 0, rose = 0, total;

    do{
        printf("Selecione uma opção:\n");
        printf("t- tinto\n");
        printf("b- branco\n");
        printf("r- rose\n");
        printf("f- fim\n");
        scanf(" %c", &menu);

        switch(menu){
            case 't':{
                tinto++;
                break;
            }
            case 'b':{
                branco++;
                break;
            }
            case 'r':{
                rose++;
                break;
            }
            case 'f':{
                printf("Você saiu!\n");
            }
            default:{
                printf("Opção inválida!\n");
            }
        }

        total = tinto + branco + rose;
    } while (menu != 'f');

    printf("Tinto: %d\n", tinto);
    printf("Branco: %d\n", branco);
    printf("Rose: %d\n", rose);
    printf("Total: %d\n", total);

    return 0;
}
