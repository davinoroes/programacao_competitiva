#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m, time = 0;
    cin >> n >> m;
    long long arr[m];
    for(long long i = 0; i < m; i++) cin >> arr[i];
    time += arr[0] - 1;
    for(long long j = 1; j < m;j++){
        if(arr[j] > arr[j-1]) time += arr[j] - arr[j-1];
        else if(arr[j] < arr[j-1]) time += n - arr[j-1] + arr[j];
    }
    cout << time;
    return 0;
}