#include <iostream>
#include <vector>
using namespace std;


vector<int> somabin(vector<int> X, vector<int> Y, int n){
    vector<int> C(n);
    int carry = 0;
    int x = 0;
    for(int i  = n-1; i >= 0; i--){
        int soma = X[i] + Y[i] + carry;
        C[x] = soma%2;
        carry = soma/2;
        x++;
    }
    if (carry == 1){
        C.push_back(1);
    }
    return C;
}


int main(){
    vector<int> A = {1,1,0,0};
    vector<int> B = {1,1,0,1};
    int n;
    cin >> n;

    vector<int> C = somabin(A,B,n);
    for (int i = 0; i < int(C.size()); i++){
        cout << " " << C[i];
    }

    return 0;
}
