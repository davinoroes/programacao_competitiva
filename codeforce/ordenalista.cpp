/*
Aqui temos uma lista L de tamanho n que tem como propriedade o fato de L[0] até L[n-2] está ordenada,
porém o valor L[n-1] está fora da ordenação, o objetivo é alterar a lista de modo que ela fique totalmente ordenada.
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

int main() {
    vector<int> L = {1, 3, 7, 9, 4};
    int n = L.size();
    ajeita(L, n);
    return 0;
}