#include <stdio.h>
#include "pilha.h"
int main(){
    Pilha* p = criarPilha();
    empilha(p, 10);
    empilha(p, 20);
    empilha(p, 30);
    empilha(p, 40);
    printf("%d\n",desempilha(p));
    printf("%d\n",desempilha(p));
    printf("%d\n",desempilha(p));
    printf("%d\n",estaCheia(p));
    printf("%d\n",estaVazia(p));
    printf("%d\n",topo(p));
}
