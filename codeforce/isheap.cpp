#include <bits/stdc++.h>
using namespace std;

#define N 10
int L[N] = {1,2,3,4,5,6,7,8,9,10};
int resp;


int valid_heap(int L[N]){
    int max_heap = 0, min_heap = 0;
    for(int i = 0; i < N/2; i++){
        if(L[i] > L[i*2+1]  && L[i] > L[i*2+2]){
            max_heap = 1;
        }
        else if(L[i] < L[i*2+1]  && L[i] < L[i*2+2]){
            min_heap = 1;
        }
    }
    if(max_heap == 1 && min_heap == 1){
        return 0;
    }
    if(min_heap == 1) return 1;
    return 2;
}

int main() {
    int resp = valid_heap(L);
    cout << resp;
}