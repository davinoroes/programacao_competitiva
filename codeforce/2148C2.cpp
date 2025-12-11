#include<bits/stdc++.h>
using namespace std;


//esse eh em o(n+max(next_temp))
int max_pacer(int now_temp, int now_bin, int next_temp,int next_bin){
    int count = 0;
    while(next_temp - now_temp > 0){
        int dif = next_temp - now_temp;
        if(dif == 1 && (now_bin^next_bin) == 1){
            count++;
        }
        else if(dif > 1){
            count++;
            now_bin = (now_bin^1);
        }
        now_temp++;
    }
    return count;
}

int main(){
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