#include <stdio.h>
#include <stdlib.h>

int main() {
    int patinhos = 5;

    while (patinhos > 0) {

       printf("%d patinhos foram passear \n", patinhos);
       printf("Além das montanhas Para brincar\n");
       printf("A mamãe gritou: Quá, quá, quá, quá \n");
       patinhos--;
         
        if (patinhos > 0) {
            printf("Mas só %d patinhos voltaram de lá. \n", patinhos);
        }
        else {
            printf("Mas nenhum patinho voltou de la :( ");
        }
        
    
    }    

   return 0;
}