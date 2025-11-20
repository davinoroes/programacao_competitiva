#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 != 0) cout << 0 << endl;
        else{
            int num = n/4 +1;
            cout << num << endl;
        }
    }
    
    return 0;
}