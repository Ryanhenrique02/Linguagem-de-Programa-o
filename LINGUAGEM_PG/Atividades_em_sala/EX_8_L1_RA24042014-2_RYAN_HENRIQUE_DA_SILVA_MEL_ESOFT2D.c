#include <stdio.h>

int main() {
    float distancia, consumo, precGas, custoT;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o consumo medio de combustivel do veiculo (km/l): ");
    scanf("%f", &consumo);

    printf("Digite o preco da gasolina (R$/l): ");
    scanf("%f", &precGas);

    custoT = (distancia / consumo) * precGas;

    printf("O custo total da viagem é: R$ %.2f\n", custoT);

    return 0;
}