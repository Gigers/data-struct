/*
    Algoritimo para exluir celula da lista
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{

    int conteudo;
    struct lista * proximo;
}CELULA;

void
insere(CELULA * lista, int conteudo){

    CELULA *nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo  = lista -> proximo;

    lista -> proximo = nova;
}

void
exluir(CELULA * lista, int qtd){

    int c;

    CELULA * p;
    p = malloc(sizeof(CELULA));

    while(c < qtd){

        p = lista -> proximo;
        lista -> proximo = p -> proximo;

        free(p);

        c++;

    }
}

void
exibe(CELULA * lista){

    CELULA * p;

    p = lista -> proximo;
    
    while (p != NULL){

           fprintf(stdout, " %d ", p -> conteudo);

           p = p -> proximo;

    }
}

void
main(void){

    CELULA *cabeca;
    cabeca = malloc(sizeof(CELULA));

    cabeca -> proximo = NULL;

    for(int i = 0; i < 5; i++){

        insere(cabeca, i);

    }

    exibe(cabeca); printf("\n");

    printf("Exluindo celulas da lista\n");
    exluir(cabeca, 2);

    printf("A lista após excluções fica assim\n");
    exibe(cabeca); printf("\n");

}