#include <bits/stdc++.h>
using namespace std;

int binary_search(int x,int y){
    long long left = 1, right = 1LL * y *x;
    long long ans = - 1;
    while(left<=right){
        long long mid = (left+ right)/2;
        long long count = mid - mid/x;

        if (count >= y){
            ans = mid;
            right = mid -1;
        }
        else{
            left = mid + 1;
        }
    }
    return int(ans);

} 

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t;i++){
        int n, k;
        cin >> n >> k;
        int answer = binary_search(n,k);
        cout << answer << endl;
    }
    return 0;
}