// Fibonacci recursivo

#include <stdio.h>

/*
    Sequência de Fibonacci
    
    1 1 2 3 5 8 13 21 34 55

    Veja que há um padrão, onde o valor atual soma com o anterior para gerar o próximo
    perceba que a sequẽncia como um todo, é um grande problema, que dentro dele apresenta
    o mesmo problema, porém menor.

    Mas há uma questão interessante dentro deste algoritimo. 
    Perceba a quantidade de vezes que estou chamando a função
    Com essa quantidade de chamadas torno o meu algoritimo ineficinete,
    uma vez que terei de chamar muitas vezes a mesma função

    Além disso por se tratar uma função que sempre estará retornando alguns
    valores para achar os seguintes, isso significa que, o algoritimo irá 
    fazer calculo para números já encontrados. O que faz chegarmos a uma conclusão

    O algoritimo de Fibonacci é um exemplo de algoritimo em que a recursividade afeta 
    o desempenho, não sendo recomendado seu uso.
*/

int
fibbo(int a){
    
    //Identificando o menor caso
    if(a <= 2){
        return 1;
    } 

    else {
        return fibbo(a - 1) + fibbo(a - 2);
    }
}

void 
main(void){

    int maxi = 6;

    printf("A sequência de fibonacci de 1 a %d é %d\n", maxi, fibbo(maxi));

}