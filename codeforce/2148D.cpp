#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<ll> odds;
        int n;
        ll count = 0;
        cin >> n;
        for(int i = 0; i < n;i++){
            ll ai; cin >> ai;
            if(ai % 2 == 0) count += ai;
            else odds.push_back(ai);
        }
        if(odds.empty()){
            cout << 0 << endl;
            continue;
        }
        sort(odds.begin(),odds.end(),greater<ll>{});
        int m = int(odds.size());
        ll ceil = (m+1)/2;
        ll sums_odds = 0;
        for(int r = 0; r < ceil;r++) sums_odds += odds[r];
        cout << (sums_odds + count) << endl;
    }
    return 0;
}