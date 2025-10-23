#include <iostream>

using namespace std;

#define N 10

// Elementos incomuns de duas listas já ordenadas, em O(n).

int U[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int V[N] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 31};
int resp;

int elements(int U[], int V[]) {
    int i = 0, j = 0;
    resp = 0;
    
    while (i < N && j < N) {
        if (U[i] < V[j]) {
            resp++;
            i++;
        } else if (U[i] > V[j]) {
            resp++;
            j++;
        } else {
            resp++;
            i++;
            j++;
        }
    }
    while (j < N) {
        resp++;
        j++;
    }
    while (i < N) {
        resp++;
        i++;
    }
    return resp;
}
int main() {
    int resposta = elements(U, V);
    cout << resposta << endl;
    return 0;
}