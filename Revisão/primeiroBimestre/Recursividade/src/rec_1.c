// Fatorial recursivo

#include <stdio.h>

int
fat(int a){

    // Identificando o caso base (Caso menor)
    if(a <= 1){
        return 1;
    } 
    
    // Criando a recursividade, onde o valor que entra na função
    // chama ela mesma, porém reduzindo 1
    else {
        return a * fat(a - 1);
    }
    
}

void 
main(void){

    printf("%d\n", fat(4));

}