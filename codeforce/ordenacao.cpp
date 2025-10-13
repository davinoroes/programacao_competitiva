/*
Aqui temos um algoritmo de ordenação de lista que utiliza a função ajeita(vector<int>& L, int n) do ajeitandolista.cpp
Só que nesse caso, conseguimos ordenar qualquer tipo de lista (Não somente uma lista com as características do ajeitandolista.cpp)
A complexidade desse algoritmo é da ordem de O(n^2)
*/
#include <iostream>
#include <vector>
using namespace std;

void imprime(const vector<int>& L, int n) {
    cout << "[";
    for(int i = 0; i < n; i++) {
        cout << " " << L[i];
    }
    cout << "]\n";
}

void ajeita(vector<int>& L, int n) {
    int j, x;
    x = L[n-1];
    j = n-1;
    imprime(L, n);
    while(j > 0 && L[j-1] > x) {
        L[j] = L[j-1];
        cout << "j " << j << ":";
        imprime(L, n);
        j--;
    }
    L[j] = x;
    imprime(L, n);
}

void ajeitasort(vector<int>& L, int n) {
    for(int i = 2; i <= n; i++) {
        cout << "i " << i << endl;
        ajeita(L, i);
    }
}

int main() {
    vector<int> L = {10, 9, 8, 7, 6, 5, 4};
    int n = L.size();
    ajeitasort(L, n);
    imprime(L, n);
    return 0;
}