#include<bits/stdc++.h>
using namespace std;


int numTrees(int n){
    long long c = 1;
    for(int i = 1; i <= n; ++i){
        c = c* (n+i)/i;
    }
    long long result = c/(n+1);
    return static_cast<int>(result);
}

int main(){
    int test = numTrees(4);
    cout << test;
    return 0;
}
