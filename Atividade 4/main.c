#include <stdio.h>
#include <stdlib.h>

/* 4) Faça um algoritmo que peça dois números e imprima os mesmos em ordem
crescente. */

int main()
{
    int num1, num2;

    printf("\n Informe um numero: ");
    scanf("%d", &num1);

    printf("\n Informe outro numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("\n %d \n %d", num2, num1);
    }else if(num1 == num2){
        printf("\n Os numeros sao iguais!\n");
    }else{
         printf("\n %d \n %d", num1, num2);
         }

}
