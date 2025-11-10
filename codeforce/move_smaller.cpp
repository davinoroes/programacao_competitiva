#include <iostream>

using namespace std;

struct NoLista {
    int valor;
    NoLista *prox;
    NoLista(int v, NoLista *p = nullptr) : valor(v), prox(p) {}
};

NoLista *criar_no(int valor, NoLista *prox){
    return new NoLista(valor, prox);
}

NoLista *p;
NoLista *q;

/*
a inicialização será feita no sistema de tarefas, por exemplo:
p = criar_no(5, criar_no(8, criar_no(13, criar_no(2, nullptr))));
*/

// -- escreva seu código abaixo, não altere esta linha

NoLista *final_insert(int k, NoLista *q){
    NoLista *aux = criar_no(k, nullptr);
    if (q == nullptr) return aux;
    NoLista *atual = q;
    while (atual->prox != nullptr) {
        atual = atual->prox;
    }
    atual->prox = aux;
    return q;
}

NoLista *smaller(NoLista *p){
    if (p == nullptr || p->prox == nullptr) return p;
    NoLista *now, *ant, *q;
    q = nullptr;
    now = p->prox;
    ant = p;
    while (now != nullptr) {
        if (now->valor < ant->valor) {
            q = final_insert(now->valor, q);
        }
        ant = now;
        now = now->prox;
    }
    return q;
}

int main() {
    p = smaller(p);
    return 0;
}