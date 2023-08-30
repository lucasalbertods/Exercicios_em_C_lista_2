#include <stdio.h>
#include <stdlib.h>

//2) Faça um algoritmo que peça 2 valores inteiros e imprima o maior deles

int main()
{
   int num1, num2;

   printf("Informe o Valor 1: ");
   scanf("%d", &num1);

   printf("Informe o Valor 2: ");
   scanf("%d", &num2);

   if(num1>num2){
    printf("\n O valor 1 eh maior = %d", num1);
   }
   else if(num2>num1){
    printf("\n O valor 2 eh maior = %d", num2);
   }
   else{
    printf("\n Os valores sao iguais \n");
   }
}
