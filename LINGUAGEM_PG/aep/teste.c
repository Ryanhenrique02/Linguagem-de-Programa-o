#include <stdio.h>

// Função para criptografar a mensagem
void criptografar(char *mensagem, char *chave) {
    int i = 0;
    while (mensagem[i] != '\0') {
        mensagem[i] = mensagem[i] + chave[i % strlen(chave)];
        i++;
    }
}

// Função para descriptografar a mensagem
void descriptografar(char *mensagem, char *chave) {
    int i = 0;
    while (mensagem[i] != '\0') {
        mensagem[i] = mensagem[i] - chave[i % strlen(chave)];
        i++;
    }
}

int main() {
    char usuario[100];
    char senha[100];
    char mensagem[100];

    printf("Digite o usuário: ");
    scanf("%s", usuario);

    printf("Digite a senha: ");
    scanf("%s", senha);

    printf("Digite a mensagem: ");
    scanf(" %[^\n]s", mensagem); // Lê a mensagem com espaços

    criptografar(mensagem, senha);
    printf("Mensagem criptografada: %s\n", mensagem);

    FILE *arquivo = fopen("mensagem.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%s", mensagem);
        fclose(arquivo);
        printf("Mensagem criptografada e salva com sucesso.\n");
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    // Para testar a descriptografia
    arquivo = fopen("mensagem.txt", "r");
    if (arquivo != NULL) {
        fscanf(arquivo, "%s", mensagem);
        fclose(arquivo);
        descriptografar(mensagem, senha);
        printf("Mensagem descriptografada: %s\n", mensagem);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}
