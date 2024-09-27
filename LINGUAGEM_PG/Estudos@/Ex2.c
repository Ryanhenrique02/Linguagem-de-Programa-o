#include<stdio.h>
#include<locale.h>
int main(){
    int n1;
    float n2 ;
    printf("Escreva um numero \n");
    scanf("%f",&n2);
    n1 = n2;
    printf("numero inteiro: %d \n",n1);
    printf("Numero decimal: %.2f\n", n2 - n1);

    return 0;
}