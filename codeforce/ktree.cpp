#include <iostream>

using namespace std;

typedef struct NoArv{
	int valor;
	struct NoArv * esq;
	struct NoArv * dir;
} NoArv;


NoArv * p = nullptr;

int k = 2;

int resp;


// -- escreva seu código abaixo, não altere esta linha

void k_search(NoArv *p, int k, int *contador, int *resultado){
    if(p == nullptr || *contador >= k) return;
    k_search(p->esq, k, contador, resultado);
    (*contador)++;
    if(*contador == k){
        *resultado = p->valor;
        return;
    }
    k_search(p->dir,k,contador,resultado);
}

int findk(NoArv *p, int k){
    int contador = 0;
    int resultado = -1;
    k_search(p,k, &contador, &resultado);
    return resultado;
}

int main() {

    resp = findk(p,k);

    cout << resp << endl;
    return 0;
}