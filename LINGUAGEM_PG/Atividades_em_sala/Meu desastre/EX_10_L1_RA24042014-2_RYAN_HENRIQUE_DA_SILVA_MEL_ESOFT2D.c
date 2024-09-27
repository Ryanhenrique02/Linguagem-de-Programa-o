#include <stdio.h>

int main() {
    int numAlunos, i = 0;
    float nota, somaNotas = 0.0, media;

    printf("Digite o numero de alunos na turma: ");
    scanf("%d", &numAlunos);

    while (i < numAlunos) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        somaNotas += nota;
        i++;
    }

    media = somaNotas / numAlunos;

    printf("A media da turma e: %.2f\n", media);
    if (media >= 7.0) {
        printf("Situacao da turma: Aprovada\n");
    } else if (media >= 5.0) {
        printf("Situaca da turma: Em recuperação\n");
    } else {
        printf("Situacao da turma: Reprovada\n");
    }

    return 0;
}
