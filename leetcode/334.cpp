#include<bits/stdc++.h>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int num1 = INT_MAX, num2 = INT_MAX;
    for(int n : nums){
        if(n <= num1) num1 = n;
        else if(n <= num2) num2 = n;
        else return true;
    }
    return false;
}

int main(){
    
    
    return 0;
}