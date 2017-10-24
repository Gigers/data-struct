# Aula 24/10/2017

## Algoritimos de força bruta

Dois tipos: <code>(n ^ 2) - 1</code> ou <code>n!</code>

### Algoritimo de boyer-moor

Trabalha com saltos, por exemplo, é necessário buscar determinado texto em uma frase, o que o algoritimo faz é verificar os itens.
Ao verificar a letra ele fará a seguinte análise, caso a letra esteja na palavra buscada, pula uma quantidade de casas que consiga encaixar a frase no lugar certo, caso contrário ele irá pular uma quantidade igual a quantidade de letras presentes na palavra buscada.

OBS: Este algoritimo é mais rápido que Quick-sort, Merge-sort pois ele em média gasta n tempos.


## Arvores binárias

* Importante: Árvores binárias representa log(n)2.

Árvores binárias são utilizadas principalmente para criar índices de banco de dados (SQL e NoSQL). Isso porque ele é bem rápido na pesquisa, mesmo com o crescimento  

* OBS: Todos os nós da esquerda tem valor menor, e todos os nós da direita, tem valor maior.

Qual a diferença entre buscar elemento na árvore binária e no vetor ordenado ?
R: A diferença está na velocidade, no caso dos vetores, quanto mais elementos, mais lentos ficam (Inserir e remover) e em uma árvore binária (B- Tree) basta mover ponteiros, o que é muito rápido.

### Formas de percorrer a árvore

* 1° - Esquerda-Raiz-Direita;
* 2° - Esquerda-Direita-Raiz;
    * A + B * C
        * Faz a árvore e gera uma notação pós fixa

Notação Infixa para Posfixa