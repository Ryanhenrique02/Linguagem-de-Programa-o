#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
float comp;
printf ("Digite o valor da compra: ");
scanf("%f", &comp);

if (comp <= 100) {
         printf("Sua compra não terá desconto: R$ %.2f\n", comp);
    } else if (comp > 100 && comp < 500) {
        printf("Sua compra tem 10%% de desconto: R$ %.2f\n", comp - (comp * 0.1));
    } else if (comp >= 500) {
        printf("Sua compra tem 20%% de desconto: R$ %.2f\n", comp - (comp * 0.2));
    }

return 0;
}
