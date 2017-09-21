/*
VETOR PARA LISTA. Escreva uma função que copie um
vetor para uma lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int conteudo;
    struct celula * proximo;
}CELULA;

void
insere(CELULA *lista, int conteudo){

    CELULA *nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;
        
    lista -> proximo = nova;
    
}

void
exclui_qtd(CELULA *lista, int qtd){

    CELULA *p;    

    int c = 0;

    while(c < qtd){

        p -> proximo = lista -> proximo;
        lista -> proximo = p -> proximo;
        
        free(p);

        c++;
    }
}

void
exibe(CELULA *lista){

    CELULA *p;
    p = lista -> proximo;

    while(p != NULL){
        fprintf(stdout, " %d ", p -> conteudo);
        p = p -> proximo;
    }
    fprintf(stdout, "\n");
}

void
main(void){
    
    int vetor[] = {1,2,3,4,5};
    CELULA * cabeca = malloc(sizeof(CELULA));

    for(int i = 0; i < sizeof(vetor) / sizeof(int); i++){
        insere(cabeca, vetor[i]);
    }

    printf("O vetor foi transformado em lista encadeada, veja: \n");
    exibe(cabeca);
}