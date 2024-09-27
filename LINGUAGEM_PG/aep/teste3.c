#include <stdio.h>

int validarSenha(char senha[]) {
    int temMaiuscula = 0, temMinuscula = 0, temNumero = 0, temEspecial = 0;
    int tamanho = 0;

    // Calcula o tamanho da senha e verifica os caracteres
    while (senha[tamanho] != '\0') {
        if (senha[tamanho] >= 'A' && senha[tamanho] <= 'Z') {
            temMaiuscula = 1;
        } else if (senha[tamanho] >= 'a' && senha[tamanho] <= 'z') {
            temMinuscula = 1;
        } else if (senha[tamanho] >= '0' && senha[tamanho] <= '9') {
            temNumero = 1;
        } else {
            temEspecial = 1;
        }
        tamanho++;
    }

    // Verifica se a senha tem pelo menos 8 caracteres e todos os critérios
    return tamanho >= 8 && temMaiuscula && temMinuscula && temNumero && temEspecial;
}

int main() {
    char senha[100];

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (validarSenha(senha)) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida! A senha deve ter pelo menos 8 caracteres, incluindo uma letra maiúscula, uma letra minúscula, um número e um caractere especial.\n");
    }

    return 0;
}
