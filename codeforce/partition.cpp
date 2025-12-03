#include <iostream>
#include <cmath>
using namespace std;

struct NoLista {
    int valor;
    NoLista *prox;
    NoLista(int v, NoLista *p = nullptr) : valor(v), prox(p) {}
};

NoLista *criar_no(int valor, NoLista *prox) {
    return new NoLista(valor, prox);
}

NoLista *p;
int k = 10;

// -- escreva seu código abaixo, não altere esta linha

NoLista *new_head(NoLista *head) {
    if (head == nullptr || head->prox == nullptr) return head;
    
    NoLista *smaller_k_head = nullptr, *smaller_k_tail = nullptr;
    NoLista *greater_head = nullptr, *greater_tail = nullptr;
    NoLista *curr = head;
    
    while (curr != nullptr) {
        NoLista *next = curr->prox;
        curr->prox = nullptr;
        
        if (curr->valor <= k) {
            if (smaller_k_head == nullptr) {
                smaller_k_head = smaller_k_tail = curr;
            } else {
                smaller_k_tail->prox = curr;
                smaller_k_tail = curr;
            }
        } else {
            if (greater_head == nullptr) {
                greater_head = greater_tail = curr;
            } else {
                greater_tail->prox = curr;
                greater_tail = curr;
            }
        }
        curr = next;
    }
    
    if (smaller_k_head == nullptr || greater_head == nullptr) return head;
    
    smaller_k_tail->prox = greater_head;
    return smaller_k_head;
}

int main() {
    
    
    return 0;
}