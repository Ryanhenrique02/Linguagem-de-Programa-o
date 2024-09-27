#include<stdio.h>

void caralho (float ){
    
}

int main(){

    char name[50], carg;
    float sal;
    int id;

    printf("Escreva seu nome:\n");
    scanf(" %s", &name);
    printf("Diite sua Idade:\n");
    scanf("%d", &id);
    printf("Insira seu salario:\n");
    scanf("%f", &sal);
    printf("Qual o seu Cargo:\n");
    scanf("%s", &carg);

    if(carg!='A' && carg!='B' && carg!='C' && carg !='D'){
        printf("Cargo invalido.\n");
        main();
    }
    switch (carg)
    {
    case 'A':
        (sal >= 1499.00 && sal <= 2499.00);
             sal = sal * 1.15;
                printf(" Seu novo salario  deAnalista %.2f", sal);
                    break;
    case 'B':
        (sal>= 2500.00 && sal<= 3000.00);
            sal = sal*1.10;
                printf("Seu novalo salario de Bombeiro %.2f", sal);
                 break;
    case 'C':
        (sal >= 3001.00 && sal<= 3500.00);
            sal = sal*1.05;
                printf("Seu novo salario de Coveiro %.2f", sal);
                    break;
    case'D':
        (sal>= 3501.00 && sal<=4000.00);
            sal = sal* 1.02;
                printf("Seu novo salario de Dentista%.2f", sal);
                    break;
    default:
        break;
    }


    
    return 0;
}
