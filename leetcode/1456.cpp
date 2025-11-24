#include<bits/stdc++.h>
using namespace std;


int is_vowel(char x){
    vector<char> vowels = {'a','e','i','o','u'};
    if(count(vowels.begin(), vowels.end(), x) > 0) return 1;
    return 0;
}

int maxVowels(string s, int k) {
    int n = s.size(), answer_value = 0;
    for(int j = 0; j < k; j++){
        if(is_vowel(s[j]) == 1) answer_value++;
    }
    int max_value = answer_value;
    for(int z = k; z < n;z++){
        if(max_value == k) return max_value;
        answer_value += is_vowel(s[z]) - is_vowel(s[z-k]);
        max_value = max(max_value,answer_value);
    }
    return max_value;
}

int main(){
    string p = "abciiidef";
    int resp = maxVowels(p,3);
    cout << resp;
    return 0;
}