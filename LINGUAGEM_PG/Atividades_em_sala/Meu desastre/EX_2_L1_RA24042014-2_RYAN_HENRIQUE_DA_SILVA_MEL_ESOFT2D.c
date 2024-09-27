#include<stdio.h>

int main(){
    int valor;
    int nt100, nt50 , nt20 , nt10 , nt5;

    printf("Digite o valor sacado: R$ ");
    scanf("%d", &valor);

    //condicional pra caso não for multiplo de 5
    if( valor % 5 !=0){
    printf("Saque indisponivel");
    } else{
    nt100 = valor / 100;
    valor = valor%100;

    nt50 = valor / 50;
    valor = valor % 50;

    nt20 = valor / 20;
    valor = valor% 20;

    nt10 = valor / 10;
    valor = valor / 10;

    nt5 = valor / 5;
    valor = valor % 5;

    printf(" A quantide cada nota(s)");

       if (nt100 > 0) 
            printf("R$ 100: %d nota(s)\n", nt100);
       if (nt50 > 0)
            printf(" R$ 50: %d nota(s)\n", nt50);
       if (nt20 > 0)
            printf(" R$ 20: %d nota(s)\n", nt20);
        if (nt10 > 0)
            printf(" R$ 10: %d nota(s)\n", nt10);
        if (nt5 > 0)
            printf(" R$ 5: %d nota(s)\n", nt5);
    }

    return 0 ;
}