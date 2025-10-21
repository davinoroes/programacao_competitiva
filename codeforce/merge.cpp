#include <iostream> 
#include <vector>
using namespace std;
//Dado dois vetores L[] e J[], ambos já ordenados, crie um novo vetor que contenha os elementos de L[] e J[] também ordenados
// Feito em complexidade de O(n) (minima possível para esse problema em específico)
vector<int> merge(const vector<int> &L, const vector<int> &J){
    vector<int> final;
    size_t i = 0; size_t k = 0;
    while(i < L.size() && k < J.size() ){
        if (L[i] <= J[k]){
            final.push_back(L[i]);
            i++;
        }
        else{
            final.push_back(J[k]);
            k++;
        }
    }
    while(i < L.size()){
        final.push_back(L[i]);
        i++;
    }
    while(k < J.size()){
        final.push_back(J[k]);
        k++;
    }
    return final;
}
// Decidi colocar vectores já prontos , mas da para alterar e criar o vetor do zero.
int main(){
    vector<int> L = {1,7,9,22,31,40,44};
    vector<int> J = {2,6,12,29,32,41};
    vector<int> result = merge(L,J);
    for (size_t a = 0; a < result.size();a++){
        cout << result[a] << ' ';
    }

    return 0;
}