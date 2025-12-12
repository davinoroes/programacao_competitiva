#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin >> s >> n;
    int size = n;
    vector<pair<int,int>> strenght;
    bool cond = true;
    while(n--){
        int xi,yi;
        cin >> xi >> yi;
        strenght.push_back({xi,yi});
    }
    sort(strenght.begin(),strenght.end());
    for(int i = 0; i < size;i++){
        if(s > strenght[i].first) s += strenght[i].second;
        else{
            cond = false;
            break;
        }
    }
    if(cond) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}