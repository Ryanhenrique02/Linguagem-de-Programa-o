#include<stdio.h>
#include<locale.h>

float A(float sal);
float B(float sal);
float C(float sal);

int main(){
    setlocale(LC_ALL, "Portuguese");
    char av;
    float sal;
    printf("Insira a avaliação do funcionário:\nA\nB\nC\n");
    scanf(" %c", &av);
    printf("Insira o salário do funcionário: ");
    scanf("%f",&sal);
    switch (av)
    {
        case 'A':
            printf("Novo salário: %.2f\n", A(sal));
            break;
        case 'B':
            printf("Novo salário: %.2f\n", B(sal));
            break;
        case 'C':
            printf("Novo salário: %.2f\n", C(sal));
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
    
    return 0;
}

float A(float sal){
    return sal+(sal*0.15);
}
float B(float sal){
    return sal+(sal*0.10);
}
float C(float sal){
    return sal+(sal*0.05);
}