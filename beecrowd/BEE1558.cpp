#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool found = false;
        for(int a = 0;a*a <= n; a ++){
            int b = n - a*a;
            if(b<0) continue;
            int b2 = (int)sqrt(b);
            if(b2*b2 == b){
                found = true;
                break;
            }   
        
        }
        
    cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}