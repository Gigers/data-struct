/*
CONCATENAÇÃO. Escreva uma função que concatene
duas listas encadeadas (isto é, “amarre” a segunda no
fim da primeira).
*/

#include <stdio.h>
#include <stdlib.h>

struct celula{
        int conteudo;
        struct celula * prox;
};

typedef struct celula CELULA;

void
insere(CELULA * lista, int conteudo){

    CELULA *c = malloc(sizeof(CELULA));

    c -> conteudo = conteudo;
    c -> prox = lista -> prox;

    lista -> prox = c;
}

void
exibe(CELULA *lista){
    CELULA *p;
    
    p  = lista -> prox;

    while(p != NULL){
        printf(" %d ", p -> conteudo);
        p = p -> prox;
    }
    printf("\n");
}

void
concat(CELULA *cabeca_1, CELULA *cabeca_2){

    CELULA *p;
    p = cabeca_1 -> prox;

    while(p -> prox != NULL){
        p = p -> prox;
    }

    p -> prox = cabeca_2 -> prox;
}

void
main(void){
    
    CELULA *cabeca_1 = malloc(sizeof(CELULA));
    CELULA *cabeca_2 = malloc(sizeof(CELULA));

    cabeca_1 -> prox = NULL;
    cabeca_2 -> prox = NULL;
    
    // Populando as listas
    for(int ge = 1; ge <= 10; ge++){
        insere(cabeca_1, ge * 10);
        insere(cabeca_2, ge * 5);
    }

    printf("Listas isoladas (Sem concatenação)\n");
    exibe(cabeca_1);
    exibe(cabeca_2);

    concat(cabeca_1, cabeca_2);

    exibe(cabeca_1);

}