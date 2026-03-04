/*
* Nome: António Marques
* Turma: TPSICAS0725
* Trabalho: Trabalho 5 - stack
*/
/*
Implemente uma Stack que guarde valores inteiros
uma Stack é uma estrutura Last in First out com os métodos:
1º
push() - adiciona um elemento na Stack
pop() - remove e devolve o ultimo elemento da Stack 
2º
peak() - ver o que esta no topo sem remover
isEmpty() - verifica se a Stack esta vazia 
size() - devolve o numero de elementos na Stack
pode optar por usar um array com tamanho pré-definido ou alocação dinâmica (malloc e free), pode usar uma struct para representar cada Node
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENPILHA 25

typedef struct pilha
{
    int topo;
    int pratos[LENPILHA];
} Pilha;

// função de carregamento de elemento na pilha
void push(Pilha* pl, int novo)
{
    if(pl->topo == LENPILHA)
    {
        printf("\nA pilha atingiu o topo\n");
    } else {
        pl->pratos[pl->topo++] = novo;
    }
}
// função de remoção de elemento da pilha
int pop(Pilha* pl) {
    int valor = 0;
    if(pl->topo == 0) {
        printf("\nA pilha esta' vazia\n");
    } else {
        valor = pl->pratos[--pl->topo];
    }
    return valor;
}
// função de verificação do conteúdo no topo da pilha
int peak(Pilha* pl) {
    int valor = 0;
    if(pl->topo == 0) {
        printf("\nA pilha esta' vazia\n");
    } else {
        valor = pl->pratos[pl->topo-1];
    }
    return valor;
}
// função verifica se a pilha tem elementos
int isEmpty(Pilha* pl) {
    return pl->topo == 0;
}
// função devolve o número de elementos na pilha
int size(Pilha* pl) {
    return pl->topo;
}

int main(void)
{
    srand(time(NULL));  // iniciador de números inteiros aleatórios
    int n = 0;
    Pilha p;
    p.topo = 0;     // inicialmente a pilha tem zero elementos
    for (int i = 0; i < 11; i++) { // ciclo de carregamento de 11 elementos na pilha 
        n = rand();
        push(&p, n);
        printf("%d ", p.pratos[p.topo - 1]);
    }
    printf("\n");
    for (int i = 0; i < 6; i++) {  // ciclo de remoção de 6 elementos da pilha
        n = pop(&p);
        printf("%d ", n);
    }
    printf("\nValor no topo: %d", peak(&p));
    if (isEmpty(&p)) printf("\nA pilha esta' vazia");
    else printf("\nA pilha nao esta' vazia");
    printf("\nA pilha tem %d elementos", size(&p));
    return 0;
}

