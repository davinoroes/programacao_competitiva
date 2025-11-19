#include<bits/stdc++.h>
using namespace std;

int minLengthAfterRemovals(string s) {
    int count_a = 0, count_b = 0;
    for(char c : s){
        if (c == 'a') count_a++;
        else if(c == 'b') count_b++;
    }
    int resp = abs(count_a - count_b);
    return resp;
}

int main(){


}