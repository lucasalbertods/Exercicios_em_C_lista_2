#include <stdio.h>
#include <stdlib.h>
/*8)Faça um algoritmo que peça 4 notas bimestrais o total de presenças de cada bimestre
de um aluno e ao final calcule e imprima a média aritmética simples e ainda imprimir
“Aprovado” para média superior ou igual a 6,0 e freqüência maior ou igual a 75% e
“Reprovado” caso a média ou a freqüência não atenderem ao especificado. (suponha
que a carga horária da disciplina é de 80h/a.)*/

int main()
{
   float n1, n2, n3, n4, media, por_pres;
   int p1, p2, p3, p4, total_pres;

   printf("\n Informe a nota do 1o Bimestre: ");
   scanf("%f", &n1);
   printf("\n Informe o total de presencas deste bimestre: ");
   scanf("%d", &p1);

   printf("\n Informe a nota do 2o Bimestre: ");
   scanf("%f", &n2);
   printf("\n Informe o total de presencas deste bimestre: ");
   scanf("%d", &p2);

   printf("\n Informe a nota do 3o Bimestre: ");
   scanf("%f", &n3);
   printf("\n Informe o total de presencas deste bimestre: ");
   scanf("%d", &p3);

   printf("\n Informe a nota do 4o Bimestre: ");
   scanf("%f", &n4);
   printf("\n Informe o total de presencas deste bimestre: ");
   scanf("%d", &p4);

   media = (n1+n2+n3+n4)/4;
   total_pres = p1+p2+p3+p4;

   por_pres = (float) (total_pres*100)/80;

   printf("\n Sua participacao foi de %.2f %% \n", por_pres);

   if(media>=6 && por_pres>=75){
    printf("\n APROVADO!! \n");
   }
   else{
    printf("\n REPROVADO!! \n");
   }

}
