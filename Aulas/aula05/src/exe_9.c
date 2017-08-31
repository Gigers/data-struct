/*
VETOR PARA LISTA. Escreva uma função que copie um vetor para uma lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

//Definindo a estrutura da lista 
typedef struct celula {

    int conteudo;
    struct celula *ponteiro; // Ponteiro para o próximo

}

void insere(int valor, celula *p){

    celula *nova;
    nova = malloc(sizeof(celula));

    // *(nova).conteudo = y;
    nova -> conteudo = valor; //nova.conteudo = valor
    nova -> ponteiro = p -> ponteiro; //nova.ponteiro = p.ponteiro (cabeça)
    p -> ponteiro = nova; //p.ponteiro = nova

}

int main(void){

    //nova -> ponteiro
    //nova.ponteiro = p.ponteiro;


}