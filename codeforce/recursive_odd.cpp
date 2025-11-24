#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
//Algoritmo recursivo que conta quantidade de valores impares em indices inpares em uma lista encadeada
//originalmente feito em C, adaptei para c++

typedef struct NoLista{
	int valor;
	struct NoLista * prox;
} NoLista;

NoLista * criar_no(int valor, NoLista * prox){
	NoLista * no = new NoLista();
	no->valor = valor;
	no->prox = prox;
	return no;
}
NoLista * p;
int resp;
/*
a inicialização será feita no sistema de tarefas
p = criar_no(5, criar_no(8, criar_no(13, criar_no(2, NULL))));
*/
// -- escreva seu código abaixo, não altere esta linha
int odd_indice(NoLista *p, int current_index){
    NoLista *current_node = p;
    int current_contribution = 0;
    if(current_node == NULL) return 0;
    else{
        if(current_node->valor%2!=0 && current_index%2!= 0){
            current_contribution++;
        }
    }
    current_index++;
    return current_contribution + odd_indice(current_node->prox, current_index);
}

int main() {
    resp = odd_indice(p, 1);
    cout << resp;
}