#include<bits/stdc++.h>
using namespace std;

bool is_divisible(int n,int x){
    if(n%x==0) return true;
    return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long num = n;
        vector<long long> divisors;
        for(long long i = 2; i*i <= n && divisors.size() < 2;i++){
            if(num%i==0){
                divisors.push_back(i);
                num /= i;
            }
        }
        if(divisors.size() == 2 && num > 1 && num != divisors[0] && num != divisors[1]){
            cout << "YES" << endl;
            cout << divisors[0] << " " << divisors[1] << " " << num << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}