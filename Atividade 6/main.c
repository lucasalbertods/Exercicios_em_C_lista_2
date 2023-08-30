#include <stdio.h>
#include <stdlib.h>

/*6) Faça um algoritmo que peça três números e armazená-los em três variáveis com os
seguintes nomes: maior, intermediário e menor (suponha números diferentes).*/

int main()
{
    int menor, medio, maior, aux;

    printf("Informe o numero 1: ");
    scanf("%d", &menor);

    printf("Informe o numero 2: ");
    scanf("%d", &medio);

    printf("Informe o numero 3: ");
    scanf("%d", &maior);
    if(menor>medio){
    aux=menor;
    menor=medio;
    medio=aux;
 }
    if(menor>maior){
    aux=menor;
    menor=maior;
    maior=aux;
 }
    if(medio>maior){
    aux=medio;
    medio=maior;
    maior=aux;
 }
    printf("\n O maior %d\n \nO intermediario %d\n \nO menor %d\n", maior, medio, menor);

}
