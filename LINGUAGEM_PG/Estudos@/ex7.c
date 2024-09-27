#include <stdio.h>
int main(){
    char name[50], carg;
    int id;
    float sal;
    
    printf("Informe o seu nome\n");
    scanf("%s", &name[50]);
    printf("informe sua Idade\n");
    scanf("%d", &id);
    printf("Informe seu salario\n");
    scanf("%f", &sal);
    printf("Informe o seu Cargo\n");
    scanf("%s",&carg);

    if (carg != 'A' && carg != 'G' && carg != 'T' && carg != 's'){
        printf("Cargo não existe\n");
        main();
    }

     switch (carg) {

        case 'A':
            if (sal >= 1499.00 && sal <= 2499.00) {
                sal = sal * 1.10;
                printf(" Seu novo salario %2.f", sal);          
            }
            break;
        case 'G':
            if (sal >= 2500.00 && sal <= 3499.00) {
                sal = sal * 1.15;
                printf(" Seu novo salario %2.f", sal); 
            }
            break;
        case 'T':
            if (sal >= 3500.00 && sal <= 4999.00) {
                sal = sal * 1.05;
                printf(" Seu novo salario %2.f", sal); 
            }
            break;
            
        default:
            printf("ERRO");
            break;
    } 
    printf("\nNome: %s\n",&name[50]);
    printf("Idade: %d\n", &id);
    printf("Salario: R$ %.2f\n", &sal);




    return 0;
}