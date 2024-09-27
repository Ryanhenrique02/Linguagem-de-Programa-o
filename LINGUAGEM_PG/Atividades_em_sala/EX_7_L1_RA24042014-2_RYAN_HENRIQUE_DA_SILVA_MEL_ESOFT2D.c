#include <stdio.h>

float calcularPrecoTotal(char nomes[][50], float precos[], int quantidades[], float descontos[], int numProdutos) {
    float total = 0.0;
    int i = 0;
    while (i < numProdutos) {
        float precoComDesconto = precos[i] * (1 - descontos[i] / 100);
        total += precoComDesconto * quantidades[i];
        i++;
    }
    return total;
}

int main() {
    int numProdutos, i = 0;
    int maxProdutos = 100; // Tamanho fixo diretamente no código
    char nomes[maxProdutos][50];
    float precos[maxProdutos];
    int quantidades[maxProdutos];
    float descontos[maxProdutos];

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &numProdutos);

    while (i < numProdutos) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Preço: ");
        scanf("%f", &precos[i]);
        printf("Quantidade: ");
        scanf("%d", &quantidades[i]);
        printf("Desconto (em %%): ");
        scanf("%f", &descontos[i]);
        i++;
    }

    float total = calcularPrecoTotal(nomes, precos, quantidades, descontos, numProdutos);
    printf("O valor total da compra é: R$ %.2f\n", total);

    return 0;
}
