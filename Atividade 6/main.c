#include <stdio.h>
#include <stdlib.h>

/*6) Fa�a um algoritmo que pe�a tr�s n�meros e armazen�-los em tr�s vari�veis com os
seguintes nomes: maior, intermedi�rio e menor (suponha n�meros diferentes).*/

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
