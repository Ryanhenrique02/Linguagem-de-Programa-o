#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2,n3,n4,resul;
    char escolha;
    printf("Escolha o tipo de media:\nA- Aritimetica=\nP - Ponderada=\nH - Harmonica=\n");
    scanf("%c",&escolha);
    printf("NOTA 1: ");
    scanf("%f",&n1);
    printf("NOTA 2: ");
    scanf("%f",&n2);
    printf("NOTA 3: ");
    scanf("%f",&n3);
    printf("NOTA 4: ");
    scanf("%f",&n4);
   if (escolha == 'A') {
        resul = (n1 + n2 + n3 + n4) / 4;
   }
    else if(escolha =='P'){
        resul =(2*n1 +3*n2 +5*n3 +10*n4)/20;
    }
    else if(escolha =='H'){
        resul =(n1+n2+n3+n4)/4;
    }
    printf("Resultado: %.2f\n", resul);

  return 0;
        
    }