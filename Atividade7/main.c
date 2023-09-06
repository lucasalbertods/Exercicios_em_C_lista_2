#include <stdio.h>
#include <stdlib.h>
/*7) Faça um programa que peça a sigla do estado de uma pessoa e imprima uma das
seguintes mensagens:
Carioca
Paulista
Paranaense
Outros*/

int main()
{
   char sigla[2];
   printf("\n Informe a Sigla do seu Estado em maiusculco: ");
   sigla[0]=toupper(getche());
   sigla[1]=toupper(getche());
   if(sigla[0]=='R'&& sigla[1]=='J'){
    printf("\n Carioca \n");
   }
   else if(sigla[0]=='S' && sigla[1]=='P'){
    printf("\n Paulista \n");
   }
    else if(sigla[0]=='P' && sigla[1]=='R'){
    printf("\n Paranaense \n");
    }
    else{
        printf("\n Outros \n");
    }
}
