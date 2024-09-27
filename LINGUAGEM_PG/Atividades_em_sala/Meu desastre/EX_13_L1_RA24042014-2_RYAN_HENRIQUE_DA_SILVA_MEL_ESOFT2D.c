#include <stdio.h>

int main() {
    int pontos;
    char* nivel;

    printf("Digite a quantidade de pontos: ");
    scanf("%d", &pontos);

    if (pontos >= 1000) {
        nivel = "Platina";
    } else if (pontos >= 500) {
        nivel = "Ouro";
    } else if (pontos >= 200) {
        nivel = "Prata";
    } else if (pontos >= 100) {
        nivel = "Bronze";
    } else {
        nivel = "Nenhum";
    }

    printf("O nível de premiacao e: %s\n", nivel);

    return 0;
}
