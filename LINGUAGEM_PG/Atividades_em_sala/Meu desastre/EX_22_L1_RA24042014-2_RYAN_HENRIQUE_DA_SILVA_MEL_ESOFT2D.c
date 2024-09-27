#include <stdio.h>

void celsiusParaFahrenheit() {
    float c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", f );
}

void fahrenheitParaCelsius() {
    float f, c;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f );
    c = (f - 32) * 5 / 9;
    printf("Temperatura em Celsius: %.2f\n", c);
}

int main() {
    int esc;
    printf("Escolha o tipo de conversao:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("Digite sua escolha (1 ou 2): ");
    scanf("%d", &esc);

    if (esc == 1) {
        celsiusParaFahrenheit();
    } else if (esc == 2) {
        fahrenheitParaCelsius();
    } else {
        printf("Escolha invalida!\n");
    }

    return 0;
}
