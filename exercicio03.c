#include <stdio.h>
#include <stdlib.h>


int main() {
    int numero, primo;

    printf("==================VERIFICADOR DE NUMEROS PRIMOS==================\n");

    printf("Digite um numero para verificar se eh primo ou não: \n");
    scanf("%d", &numero);

    for(int i = 2; i <= numero; i++) {
         if(numero % i == 0) {
            primo++;
            break;
         }
    }

    if(primo > 0) {
        printf("%d eh um numero primo\n ", numero);
    }
    else {
         printf("%d nao eh um numero primo\n ", numero); 
    }

   
    return  0; 
}