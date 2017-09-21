/* 
    Célula de conteúdo mínimo - Exercício 4
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct celula{

    int conteudo;
    struct celula * proximo;

}CELULA;

void insere(CELULA *lista, int conteudo){

    CELULA *nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;
    
    lista -> proximo = nova;
}

void exclui_primeiro_elemento(CELULA * lista){

    // Cria ponteiro (Será utilizado como referência temporária)
    CELULA *p;
    
    p = lista -> proximo;
    lista -> proximo = p -> proximo;

    free(p);

}

void exclui_qtd(CELULA * lista, int qtd){

    CELULA *p;

    int c = 0;

    while(c < qtd){

        p = lista -> proximo;
        lista -> proximo = p -> proximo;

        c++;
    }
}

void
exibe(CELULA *lista){

    CELULA *p;

    p = lista -> proximo;

    while(p != NULL){

        fprintf(stdout, "%d ", p -> conteudo);

        p = p -> proximo;

    }

}


// Encontra o menor elemento da lista
int
minimo(CELULA *lista){

    CELULA *p;
    p = lista -> proximo;

    int menor = p -> conteudo;

    while(p != NULL){

        if(menor > p -> conteudo){
            menor = p -> conteudo;
        }

        p = p -> proximo;
    }

    return menor;
}

void main(void){

    CELULA *cabeca = malloc(sizeof(CELULA));
    
    for(int i = 5; i >= 2; i--){
        insere(cabeca, i);
    }

    exibe(cabeca);
    printf("O elemento mínimo é o %d\n", minimo(cabeca));

}