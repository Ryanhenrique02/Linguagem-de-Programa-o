#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um Numero:\n");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("PAR");
        }
    else{
    printf("IMPAR");
        }
    return 0 ;
}