#include <stdio.h>
#include <stdlib.h>

/* 5) Faça um algoritmo que peça três números e imprima os mesmos em ordem
decrescente.*/

int main()
{
    int num1, num2, num3, aux;

    printf("Informe o numero 1: ");
    scanf("%d", &num1);

    printf("Informe o numero 2: ");
    scanf("%d", &num2);

    printf("Informe o numero 3: ");
    scanf("%d", &num3);

    if(num1 < num2){
    aux = num1;
    num1 = num2;
    num2 = aux;
    }
    if(num1 < num3){
    aux = num1;
    num1 = num3;
    num3 = aux;
    }
    if(num2 < num3){
    aux = num2;
    num2 = num3;
    num3 = aux;
    }
 printf("\n Os numeros em ordem decrescente: %d %d %d \n", num1, num2, num3);

}
