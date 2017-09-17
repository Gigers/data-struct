// Código para demonstrar como é feita a adição de elementos em uma lista encadeada simples

// A operação de adição, cria uma célula dentro da lista
// Para realizar esta operação, é necessário já ter a estrutura da lista criada, então vamos a ela

// Definindo a estrutura da célula

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{

    int conteudo; //Representa o conteúdo da célula
    struct lista *proximo; //Representa o campo para o próximo item da lista

} CELULA;

void
insere(CELULA *lista, int conteudo){

    CELULA *nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;

}

void
main(void){

    // Como é uma lista com cabeça, primeiro será criado a cabeça
    CELULA *cabeca;
    cabeca = malloc(sizeof(CELULA));

    cabeca -> proximo = NULL;
    
    insere(cabeca, 123);

}