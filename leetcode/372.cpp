#include<iostream>
using namespace std;

int guess(int num){
    return 1;
    //called by online judg
}
int guessNumber(int n) {
    long long left = 1, right = n;
    long long mid;
    while (left < right){
        mid = (right+left)/2;
        if(guess(mid) == 0) break;
        else if (guess(mid) == -1) right = mid-1;
        else left = mid+1;
    }
    return mid;
}

int main(){
    return 0;
}