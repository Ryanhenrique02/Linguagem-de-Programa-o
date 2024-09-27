#include <stdio.h>

int main() {
    int numLivros, i = 0;
    float preco, desconto, precoTotal = 0.0;
    int quantidade;
    char categoria[50];

    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &numLivros);

    while (i < numLivros) {
        printf("Livro %d:\n", i + 1);
        printf("Categoria: ");
        scanf("%s", categoria);
        printf("Preco: ");
        scanf("%f", &preco);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Desconto (em %%): ");
        scanf("%f", &desconto);

        float precoComDesconto = preco * (1 - desconto / 100);
        precoTotal += precoComDesconto * quantidade;
        i++;
    }

    printf("O valor total da compra é: R$ %.2f\n", precoTotal);

    return 0;
}
