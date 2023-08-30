#include <stdio.h>
#include <stdlib.h>

//3) Faça um algoritmo que peça 2 valores inteiros e imprima se eles são iguais ou não

int main()
{
 int num1, num2;

 printf("\n Informe o valor 1: ");
 scanf("%d", &num1);

 printf("\n Informe o valor 2: ");
 scanf("%d",  &num2);

 if(num1 == num2){
    printf("\n Os valores %d e %d sao iguais! \n", num1, num2);
 }else{
     printf("\n Os valores %d eo valor %d NAO sao iguais! \n", num1, num2);
 }
}
