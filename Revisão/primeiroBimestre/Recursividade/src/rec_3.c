//Somando todos os elementos de um array, utilizando recursividade

#include <stdio.h>

int
somaArray(int array[], int n){
    
    // Caso base
    if(n == 1){
        return array[0];
    } 

    // Demais casos
    else {

        int x = somaArray(array, n - 1);

        return x += array[n - 1];
    }
}

void
main(void){

    int array[] = {2, 3, 5};
    int qtdElementos = sizeof(array) / sizeof(int);

    printf("%d\n",somaArray(array, qtdElementos));

}