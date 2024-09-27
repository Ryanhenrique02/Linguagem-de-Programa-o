#include <stdio.h>
#include <math.h>

float calcular_prestacao(float vlempr, float txjur, int numparc);

int main() {
    float vlempr, txjur, prestacao;
    int numparc;

    printf("Insira o valor do emprestimo: ");
    scanf("%f", &vlempr);

    printf("Insira a taxa de juros mensal (em decimal, por exemplo, 0.05 para 5%%): ");
    scanf("%f", &txjur);

    printf("Insira o numero de parcelas: ");
    scanf("%d", &numparc);

    prestacao = calcular_prestacao(vlempr, txjur, numparc);

    printf("O valor da prestacao mensal e: %.2f\n", prestacao);

    return 0;
}

float calcular_prestacao(float vlempr, float txjur, int numparc) {
    return (vlempr * txjur) / (1 - pow(1 + txjur, -numparc));
}
