#include<iostream>
using namespace std;

//Questão feita na prova de programação, que adaptei pro c++;

#define N 10
int L[N] = {1,1,2,3,4,4,4,5,6,8};

int main(){
    int auxiliar[N];
    auxiliar[0] = L[0];
    int j = 1;
    int k = 0;
    for(int i = 0; i < N; i++){
        if (L[i] == L[j] && L[i] != auxiliar[k]){
            auxiliar[k+1] = L[i];
            k++;
        }
        else if(L[i] != L[j] && L[j] != auxiliar[k]){
            auxiliar[k+1] = L[j];
            k++;
        }
        j++;
    }
    for(int a = k+1; k < N;k++ ){
        auxiliar[a] = 0;
    }
    for(int x = 0; x < N-1; x++){
        cout << auxiliar[x] << ' ';
    }
    return 0;
}