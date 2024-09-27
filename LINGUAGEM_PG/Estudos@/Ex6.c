#include <stdio.h>

// Função para validar o cargo
char validarCargo() {
    char cargo;
    do {
        printf("Informe o cargo (A - Analista, G - Gerente, T - Técnico, S - Secretária): ");
        scanf(" %c", &cargo);
        switch (cargo) {
            case 'A':
            case 'G':
            case 'T':
            case 'S':
                return cargo;
            default:
                printf("Cargo inválido! Tente novamente.\n");
        }
    } while (1);
}

// Função para calcular o salário ajustado
float calcularSalarioAjustado(char cargo, float salario) {
    float aumento = 0.0;
    switch (cargo) {
        case 'A':
            if (salario >= 1499.00 && salario <= 2499.00) {
                aumento = salario * 0.10;
            }
            break;
        case 'G':
            if (salario >= 2500.00 && salario <= 3499.00) {
                aumento = salario * 0.15;
            }
            break;
        case 'T':
            if (salario >= 3500.00 && salario <= 4999.00) {
                aumento = salario * 0.05;
            }
            break;
        default:
            break;
    }
    return salario + aumento;
}

int main() {
    char nome[100];
    int idade;
    char cargo;
    float salario, salarioAjustado;

    // Solicita as informações do funcionário
    printf("Informe o nome do funcionário: ");
    scanf(" %[^\n]", nome);
    printf("Informe a idade do funcionário: ");
    scanf("%d", &idade);
    cargo = validarCargo();
    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario);

    // Calcula o salário ajustado
    salarioAjustado = calcularSalarioAjustado(cargo, salario);

    // Exibe as informações do funcionário
    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Cargo: %c\n", cargo);
    printf("Salário inicial: R$ %.2f\n", salario);
    printf("Salário ajustado: R$ %.2f\n", salarioAjustado);

    return 0;
}
