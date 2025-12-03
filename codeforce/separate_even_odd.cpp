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

// -- escreva seu código abaixo, não altere esta linha

NoLista *new_head(NoLista *head) {
    NoLista *even_head = nullptr, *even_tail = nullptr, *odd_head = nullptr, *odd_tail = nullptr, *current = head;
    if (head == nullptr || head->prox == nullptr) return head;
    
    while (current != nullptr) {
        NoLista *next = current->prox;
        current->prox = nullptr;
        
        if (current->valor % 2 == 0) {
            if (even_head == nullptr) {
                even_head = even_tail = current;
            } else {
                even_tail->prox = current;
                even_tail = current;
            }
        } else {
            if (odd_head == nullptr) {
                odd_head = odd_tail = current;
            } else {
                odd_tail->prox = current;
                odd_tail = current;
            }
        }
        current = next;
    }
    
    if (even_head == nullptr) return odd_head;
    even_tail->prox = odd_head;
    return even_head;
}

int main() {
    
    return 0;
}