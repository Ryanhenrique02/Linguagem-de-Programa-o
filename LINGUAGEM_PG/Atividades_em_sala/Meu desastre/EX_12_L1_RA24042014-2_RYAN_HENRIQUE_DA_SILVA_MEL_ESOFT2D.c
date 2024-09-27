#include <stdio.h>

int main() {
    float taxaB, taxaPorKm, kmRodados, valorTotal;

    printf("Digite a taxa base do aluguel (R$): ");
    scanf("%f", &taxaB);

    printf("Digite a taxa adicional por quilômetro rodado (R$/km): ");
    scanf("%f", &taxaPorKm);

    printf("Digite a quantidade de quilômetros rodados: ");
    scanf("%f", &kmRodados);

    valorTotal = taxaB + (taxaPorKm * kmRodados);

    printf("O valor total do aluguel é: R$ %.2f\n", valorTotal);

    return 0;
}
