#include<iostream>
#include<string>
using namespace std;

bool isSubsequence(string s, string t) {
    int size = int(s.size()), size2 = int(t.size());
    int i = 0, j = 0;
    while(i < size && j < size2){
        if(s[i] == t[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    } 
    if(j == size2 && i < size) return false;
    return true;
}


int main(){
    string s1,s2;
    s1 = "axc", s2 = "ahbgdc";
    bool resp = isSubsequence(s1,s2);
    cout << resp;
    return 0;
}