#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(int i = 0; num >= i; num--){
        printf("%d\n", num);
    }
    /* professora

    int num;

    printf("Informe um número: );
    scanf("%d, &num);

    for(int = num; i >= 0; i--){
        printf("%d\t", i);

    */

    return 0;
}
