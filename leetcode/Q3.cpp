#include<bits/stdc++.h>
using namespace std;

// algoritmo (n*log(N)), descobri que da pra fazer em o(n) mas n faço a menor ideia como.
long long countDistinct(long long n) {
    long long resp = n;
    for(long long i = 1; i <= n; i++){
        string s1 = to_string(i);
        for(char c : s1){
            if(c == '0') {
                resp--;
                break;
            }
        }
        
    }
    return resp;
}

int main(){
    long long number = 10;
    long long resposta = countDistinct(number);
    cout << resposta; 
    

    return 0;
}