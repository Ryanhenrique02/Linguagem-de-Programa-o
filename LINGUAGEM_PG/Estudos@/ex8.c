#include<stdio.h>
int main(){
    float ld1, ld2, ld3;

    printf("informe o primeiro lado do triangulo:\n"),
    scanf("%f",&ld1);
    printf("informe o segundo lado do triangulo:\n");
    scanf("%f",&ld2);
    printf("informe o terceiro lado do triangulo:\n");
    scanf("%f",&ld3);
        if (ld1 == ld2 && ld2 == ld3){
           printf("O triengulo e equila tero.\n");
            } else if (ld1 != ld2 && ld2 != ld3){
           printf("O triengulo e isesceles.\n");
            } else {
           printf("O triangulo e escaleno.\n");
    }
    
    return 0;
}