#include <stdio.h>
#include <stdlib.h>
/*1) Faça um algoritmo que peça 4 notas e o total da porcentagem de presenças e, ao final,
calcule a média aritmética simples e ainda imprima “Aprovado” para média superior ou
igual a 6,0 e total de presenças maior que 75% e imprima “Reprovado” caso contrário.*/

int main()
{
    float n1, n2, n3, n4, media, freq;
    printf("\n Informe a Nota 1: ");scanf("%f", &n1);

    printf("\n Informe a Nota 2: ");scanf("%f", &n2);

    printf("\n Informe a Nota 3: ");scanf("%f", &n3);

    printf("\n Informe a Nota 4: ");scanf("%f", &n4);

    printf("\n Informe o percentual de presencas: ");
    scanf("%f", &freq);

    media = (n1+n2+n3+n4)/4;

    printf("\n\n A media eh: %.1f", media);

    if(media>=6 && freq>=75){
        printf("\n APROVADO!! \n");
    }
    else{
        printf("\n REPROVADO!! \n");
    }
}
