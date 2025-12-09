#include<bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
    long long new_dividend = dividend, new_divisor = divisor;
    if (new_dividend == 0) return 0;
    long long count = 0;
    if(new_dividend > 0){
        if(new_divisor > 0){
            while(new_dividend >= new_divisor){
                if(count == INT_MAX) return INT_MAX;
                count++;
            
            new_dividend -= new_divisor;
            }
        }
        else{
            while(new_dividend >= abs(new_divisor)){
                if(count == INT_MIN) return INT_MIN;
                count--;
                new_dividend += new_divisor;
            }
        }
    }
    else{
        if(new_divisor < 0){
            while(new_dividend <= new_divisor){
                if(count == INT_MAX) return INT_MAX;
                count++;
                new_dividend -= new_divisor;
            }
        }
        else{
            while(abs(new_dividend) >= new_divisor){
                if(count == INT_MIN) return INT_MIN;
                count--;
                new_dividend += new_divisor;
            }
        }
    }
    return int(count);
}

int main(){
    int resp = divide(7,-3);
    cout << resp;
    
    
    return 0;
}