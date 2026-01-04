#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,l,r;
        int l1 = 0, r1 = 0;
        cin >> n >> m >> l >> r;
        for(int i = 0; i < m;i++){
            if((i%2==0 && r1 < r) || l1 == l){
                r1++;
            }
            else if((i%2 != 0 && l1 > l) || r1 == r){
                l1--;
            }
        }
        cout << l1 << " " << r1 << endl;
    }
    
    return 0;
}