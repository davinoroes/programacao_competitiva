#include<bits/stdc++.h>
using namespace std;

//minha função de revertere o numero
int reverse_number(int num){
    int resp = 0;
    while(num > 0){
        resp += (num%10);
        num /= 10;
        if(num > 0){
            resp *= 10;
        }
    }
    return resp;
}

int mirrorDistance(int n) {
    return abs(n - reverse_number(n));
}


int main(){
    int test = reverse_number(752);
    cout << test;
    return 0;
}