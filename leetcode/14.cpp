#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string resp;
    if(strs.size() == 1) return strs[0];
    int menor = strs[0].length();
    bool input = true;
    for(string word : strs){
        int atual_size = word.length();
        menor = min(menor,atual_size);
    }
    int p;
    for(int i = 0; i < menor; i++){
        for(int j = 0; j < int(strs.size())-1;j++){
            if(strs[j][i] != strs[j+1][i]) input = false;
            p = j;
        }
        if(input) resp += strs[p][i];
    }
    return resp;
}

int main(){
    vector<string> test = {"race","racist","rating"};
    string x = longestCommonPrefix(test);
    cout << x << endl;
    
    return 0;

}