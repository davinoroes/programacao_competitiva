#include<bits/stdc++.h>
using namespace std;


//usnando uma "formula" consigo em o(n);
int max_pacer(int now_temp, int now_bin, int next_temp,int next_bin){
    int dif = next_temp - now_temp;
    if(dif <= 0) return 0;
    if(dif == 1) return (now_bin^next_bin);
    int base = dif - 1;
    int parity = (dif - 1) & 1;
    int now_bin_after = now_bin ^ parity;
    int last_step_count = ( (now_bin_after ^ next_bin) == 1 ) ? 1 : 0;
    return base + last_step_count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int init_temp = 0,init_bint = 0,resp = 0;
        long long n,m;
        cin >> n >> m;
        while(n--){
            int ai,bi;
            cin >> ai >> bi;
            resp += max_pacer(init_temp,init_bint,ai,bi);
            init_temp = ai, init_bint = bi;
        }
        if(init_temp < m){
            resp += m - init_temp;
        }
        cout << resp << endl;
    }
    return 0;
}