// Código para demonstrar como funciona a impressão dos elementosde uma lista encadeada

#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura da celula

typedef struct lmp{

    int conteudo;
    struct lmp *proximo;

}CELULA;

void
adiciona(CELULA *lista, int conteudo){

    CELULA *nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;

}

void
imprime(CELULA *lista){

    CELULA *p;
    
    p = lista;

    while(p != NULL){

        printf("%d\n", p -> conteudo);

        p = p -> proximo;
    }
}

void
main(void){

    CELULA *lista;
    lista = malloc(sizeof(CELULA));

    lista -> proximo = NULL;

    for(int i = 0; i < 10; i++){
        adiciona(lista, i  * 10);
    }

    imprime(lista);
    
}