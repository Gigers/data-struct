# Aula - 31/10/2017

## Teoria dos grafos

- Explicação;
- Exercícios.

Os grafos em código podem ser definidos através de matrizes, porém esta visualização é bastante ruim.

Todos os grafos tem propriedades, e alguns deles tem propriedades raras.

Os grafos podem servir como forma de realizar a visualização de relações (Emparelhamento).

## Grafos relativamente importantes

- Cavalo 3x3;
    - Desenhe um tabuleiro 3x3;
    - A movimentação a ser feita dentro do tabuleiro é a mesma a do cavalo no xadrez (L);
    - Grafo planar;
    - Tem circuito hamiltoniano:
        - Saindo de um vertese, posso passar por todos os outros sem repetir e voltar para o primeiro.
    - Tem emparelhamento máximo;
        - Casamentos: A3, B4, D1, C2.
    - É bipartido.
- Cubo
    - É planar;
    - Possui circuito hamiltoneano;
    - Emparelhamento máximo (É o casamento do vértice, de forma que não sobre nenhum)

## Grafos bipartidos

É bipartido quando o grafo é dividido em conjuntos disjuntos (U ; V), e que cada aresta do conjunto U conecta um vértice no conjunto V.

Nos grafos bipartidos as vértices do mesmo conjunto não podem ter ligação entre si, somente com os vértices do outro conjunto.

- O grafo bipartido não tem a necessidade de ser completo
    - Completo significa que, todas as arestas ligam com todos os vértices.

### Algoritimos para otimizar os grafos bipartidos

1° - Separar aqueles que tem apenas uma ligação (Vértices de grau mínimo);
  
#### Definições

- K5 - Cinco vertices interligadas

#### Exercícios 

- E 1.1
- E 1.2