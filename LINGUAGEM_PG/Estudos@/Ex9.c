#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior,menor,valor;
    printf("Digite um 1Valor: ");
    scanf("%d",&valor);
    maior = valor;
    menor = valor;
    printf("Digite um 2ºValor: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    if (valor < menor){
        menor = valor;
    }
    printf("Digite um 3ºValor: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    if (valor < menor){
        menor = valor;
    }
        printf("Digite um 4ºValor: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    printf("Digite um 5ºValor: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    if (valor < menor){
        menor = valor;
    }
    printf("O maior numero dos 5 e %d e o menor %d", maior,menor);

  return 0;
        
    }