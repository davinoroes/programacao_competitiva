#include<iostream>
#include<string>
using namespace std;

int mdc(int a, int b){
    if(b == 0) return a;
    else{
        return mdc(b,a%b);
    }
}

string gcdOfStrings(string str1, string str2){
    if(str1+str2 != str2+str1){
        return "";
    }
    else{
        int div = mdc(str1.length(), str2.length());
        return str1.substr(0,div);
    }
}

int main(){

    return 0;
}