#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s, resp;
        getline(cin, s);
        resp += s[0];
        for(int i = 1; i < int(s.length()); i++){
            if(s[i] == ' ' && (i+1) < int(s.length())){
                resp += s[i+1];
            }
        }
        cout << resp << endl;
    }
    return 0;
}