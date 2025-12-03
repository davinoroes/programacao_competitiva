#include<bits/stdc++.h>
using namespace std;


int maxDistinct(string s) {
    set<char> differences;
    for(char c : s){
        differences.insert(c);
    }
    int resp = differences.size();
    return resp;
}


int main(){
    int test = maxDistinct("abab");
    cout << test;




    return 0;
} 