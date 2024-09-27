#include <stdio.h>

int main() {
    float vr, vd, cotd;
    printf("Digite o valor em reais: ");
    scanf("%f", &vr);
    printf("cotacao do dolar: ");
    scanf("%f", &cotd);
    vd = vr / cotd;
    printf("Valor equivalente em dolar: %.2f\n", vd);

    return 0;
}
