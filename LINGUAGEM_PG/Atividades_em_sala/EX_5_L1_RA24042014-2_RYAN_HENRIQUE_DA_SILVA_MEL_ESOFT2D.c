#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums, palp, tent = 10, semente;

    printf("Insira um numero aleatorios: ");
    scanf("%d", &semente);
    srand(semente);
    nums = rand() % 100 + 1;

    printf("jogo de adivinhacao!\n");
    printf("Tente adivinhar o numero entre 1 e 100.\n");

    for (int i = 1; i <= tent; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &palp);

        if (palp < nums) {
            printf("O numero secreto e maior.\n");
        } else if (palp > nums) {
            printf("O numero secreto e menor.\n");
        } else {
            printf("Parabens\n Você acertou o numero secreto!\n");
            return 0;
        }
    }

    printf("Voce usou todas as %d chances. O numero secreto era %d.\n", tent, nums);
    return 0;
}
