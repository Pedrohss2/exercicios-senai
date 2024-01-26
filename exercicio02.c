#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char consoanteOuVogal;

    char vogal[5] =  {'a','e','i','o','u'};
    char consoante[20] = {'b', 'c', 'd', 'f', 'g', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y' ,'z'}; 
    

    printf("Digite uma letra para verificar se eh consoante ou vogal: \n");
    scanf("%c", &consoanteOuVogal);

    for(int i = 0; i < 5; i++) {
        if(vogal[i] == consoanteOuVogal) {
            printf("Sua letra eh uma vogal hehe!!!\n");
        }
    }

    for(int i = 0; i < 20; i++) {
        if(consoante[i] == consoanteOuVogal) {
            printf("Sua letra eh uma consoante hehe! \n");
        }
    }
}