#include<iostream>
#include<string>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string merged;
    int i = 0;
    while(i < int(word1.size()) && i < int(word2.size())){
        merged += word1[i];
        merged += word2[i];
        i++;
    }
    while(i < int(word1.size())){
        merged += word1[i];
    }
    while(i < int(word2.size())){
        merged += word2[i];
    }
    return merged;
}

int main(){
    string p1,p2;
    cin >> p1;
    cout << "\n";
    cin >> p2;
    string final = mergeAlternately(p1,p2);
    cout << final << endl;

    return 0;
}