#include <stdio.h>
#include <stdlib.h>
/*1) Fa�a um algoritmo que pe�a 4 notas e o total da porcentagem de presen�as e, ao final,
calcule a m�dia aritm�tica simples e ainda imprima �Aprovado� para m�dia superior ou
igual a 6,0 e total de presen�as maior que 75% e imprima �Reprovado� caso contr�rio.*/

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
