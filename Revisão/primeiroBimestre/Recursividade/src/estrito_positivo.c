// Faça um algoritimo para calcular os valores estritamente positivos

// Valido para: t > 0

#include <stdio.h>

int 
calculoEstrito(int array[], int t){

    // Caso base
    if (t == 1){
        return array[0];
    }

    else {
        
        int x = calculoEstrito(array, t - 1);

        if(array[t - 1] > 0){
        
            return x += array[t - 1];
        
        } else {
        
            return x;
        
        }
    }
}

void
main(void){

    int array[] = {2, 3, -1, -2, 0};
    int tamanho = sizeof(array) / sizeof(int);

    printf("%d\n", calculoEstrito(array, tamanho));

}