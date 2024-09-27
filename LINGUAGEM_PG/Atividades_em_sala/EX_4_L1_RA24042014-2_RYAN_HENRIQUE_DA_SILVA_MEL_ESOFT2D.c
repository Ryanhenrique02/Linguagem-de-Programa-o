#include<stdio.h>
#include<math.h>

int pertf(int num){
    int raiz = sqrt(num);
    return(raiz * raiz == num);
}

int main(){
    int num;

    printf(" Digite um numero; ");
    scanf("%d", &num);
        if( pertf(num)){
            printf("   %d e um quadrado perfeito. \n",num);
        }else {
            printf("  %d nao e um quadrado perfeito.",num);
        }
    return 0;
}